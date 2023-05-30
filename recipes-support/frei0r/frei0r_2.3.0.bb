SUMMARY = "A large collection of free and portable video plugins "
HOMEPAGE = "https://frei0r.dyne.org/"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = " \
    file://COPYING;md5=59530bdf33659b29e73d4adb9f9f6552 \
"

SRC_URI = "git://github.com/dyne/frei0r.git;branch=master;protocol=https \
           file://0001-Fix-compile-error.patch \
           "
SRCREV = "2c45f1f09398d6242f166eb05b156021594bc3e5"
S = "${WORKDIR}/git"

inherit cmake_qt5 pkgconfig

DEPENDS += " \
    opencv \
"

FILES:${PN} += " \
    ${libdir}/frei0r-1/ \
"