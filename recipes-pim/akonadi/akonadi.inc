SUMMARY = "akonadi"
DESCRIPTION = "TODO"
HOMEPAGE = "https://invent.kde.org/akonadi/"
LICENSE = "MIT & BSD-2-Clause & BSD-3-Clause & LGPL-2.0+ & (LGPL-2.1 | LGPL-3.0 | LicenseRef-KDE-Accepted-LGPL)"

inherit cmake_kdeapp
inherit kcoreaddons
inherit kconfig
inherit kauth
inherit mime-xdg
inherit reuse_license_checksums
inherit cmake_qt5

KF5_REUSE_LICENSECHECK_ENABLED="1"
    
DEPENDS = " \
    protocolgen-native \
    kconfigwidgets \
    kiconthemes \
    kitemmodels \
    kio \
    sqlite3 \
    libxslt-native \
    docbook-xsl-stylesheets-native \
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