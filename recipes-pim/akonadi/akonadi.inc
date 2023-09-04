SUMMARY = "akonadi"
DESCRIPTION = "TODO"
HOMEPAGE = "https://invent.kde.org/akonadi/"
LICENSE = "MIT & BSD-2-Clause & BSD-3-Clause & LGPL-2.0+ & (LGPL-2.1 | LGPL-3.0 | LicenseRef-KDE-Accepted-LGPL)"

SRC_URI += " \
    file://0001-use-qemuwrapper-for-protocolgen.patch \
"

inherit cmake_kdeapp
inherit kcoreaddons
inherit kconfig
inherit kauth
inherit mime-xdg
inherit reuse_license_checksums
inherit cmake_qt5
inherit qemu
inherit mime

KF5_REUSE_LICENSECHECK_ENABLED="1"
    
DEPENDS = " \
    kconfigwidgets \
    kiconthemes \
    kitemmodels \
    kio \
    sqlite3 \
    libxslt-native \
    docbook-xsl-stylesheets-native \
    qemu-native \
"

FILES:${PN} = " \
    ${sysconfdir}/apparmor.d/* \
    ${sysconfdir}/xdg/akonadi/* \
    ${datadir}/mime/packages/akonadi* \
    ${datadir}/kf5/akonadi* \
    ${datadir}/akonadi/* \
    ${libdir}/libKPim5Akonadi* \
    ${bindir}/akonadi* \
    ${bindir}/asapcat \
"

BBCLASSEXTEND = "native" 

do_compile:prepend() {
    qemu_binary="${@qemu_wrapper_cmdline(d, '${STAGING_DIR_TARGET}',['${B}/src/.libs','${STAGING_DIR_TARGET}/${libdir}','${STAGING_DIR_TARGET}/${base_libdir}'])}"
    install -d ${B}/bin
    cat >${B}/bin/qemuwrapper <<EOF
#!/bin/sh
${qemu_binary} ${B}/bin/protocolgen "\$@"
EOF
    chmod +x ${B}/bin/qemuwrapper
}
