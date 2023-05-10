SUMMARY = "Libraries for text templating with Qt"
HOMEPAGE = "https://github.com/steveire/grantlee"
LICENSE = "LGPL-2.1-only"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=151920e38601b1e524cd2dafaa619d63"

S = "${WORKDIR}/git"

inherit cmake_qt5
inherit cmake_kdeapp

DEPENDS += " \
    qtbase \
    qtwebsockets \
"

