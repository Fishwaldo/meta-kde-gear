SUMMARY = "SANE stands for "Scanner Access Now Easy""
HOMEPAGE = "http://www.sane-project.org"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"

inherit autotools
inherit gettext 
inherit pkgconfig

DEPENDS = " \
    pkgconfig \
    libusb \
    jpeg \
    curl \
    libxml2 \
    poppler \
    avahi \
"

do_install:append() {
    rm -rf ${D}/var
}

SOLIBS = ".so"
SOLIBS += ".so.*"
FILES_SOLIBSDEV = ""
INSANE_SKIP:${PN} += "dev-so"

FILES:${PN} += " \
    ${libdir}/libsane.so.* \
    ${libdir}/sane/ \
    ${datadir}/sane/ \
"