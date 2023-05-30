SUMMARY = "The Vamp audio analysis plugin system - SDK"
HOMEPAGE = "http://www.vamp-plugins.org/develop.html"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://COPYING;md5=af2765066122f0233483605ef6d299fa"

inherit autotools-brokensep pkgconfig

DEPENDS = "libsndfile1"

SRC_URI = " \
    https://code.soundsoftware.ac.uk/attachments/download/2588/${BPN}-${PV}.tar.gz \
"
SRC_URI[sha256sum] = "b72a78ef8ff8a927dc2ed7e66ecf4c62d23268a5d74d02da25be2b8d00341099"

do_compile() {
    oe_runmake sdk plugins host rdfgen
}

do_install() {
    oe_runmake 'DESTDIR=${D}' 'INSTALL_SDK_LIBS=${libdir}' 'INSTALL_PLUGINS=${libdir}/vamp' 'INSTALL_PKGCONFIG=${libdir}/pkgconfig' install
}

FILES:${PN} += "${libdir}/vamp"