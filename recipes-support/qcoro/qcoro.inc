SUMMARY = "C++ Coroutines for Qt "
HOMEPAGE = "https://github.com/danvratil/qcoro"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=380f1e4dae9580cea509410524d5165d"

S = "${WORKDIR}/git"

inherit cmake_qt5
inherit cmake_kdeapp

DEPENDS += " \
    qtbase \
    qtwebsockets \
"

