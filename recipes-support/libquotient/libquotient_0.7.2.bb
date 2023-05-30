SUMMARY = "A Qt5 library to write cross-platform clients for Matrix"
HOMEPAGE = "https://matrix.org/docs/projects/sdk/quotient"
LICENSE = "LGPL-2.1-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=243b725d71bb5df4a1e5920b344b86ad"

SRC_URI = "gitsm://github.com/quotient-im/libQuotient.git;branch=0.7.x;protocol=https"
SRCREV = "7d256c00898db3b2b0fa7081c65c882cb593d6e5"
S = "${WORKDIR}/git"

DEPENDS = " \
    qtbase \
    qtmultimedia \
    qtkeychain \
"

inherit cmake_plasma

FILES:${PN}-dev += "${datadir}/ndk-modules"

