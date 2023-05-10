SUMMARY = "akonadi-protocolgen"
DESCRIPTION = "Build Tool for akonadi"
HOMEPAGE = "https://invent.kde.org/akonadi/"
LICENSE = "LGPL-2.0+"

SRC_URI = " \
    file://LGPL-2.0-or-later.txt;subdir=protocolgen-23.04.0 \
    file://CMakeLists.txt;subdir=protocolgen-23.04.0 \
    file://cppgenerator.cpp;subdir=protocolgen-23.04.0 \
    file://cppgenerator.h;subdir=protocolgen-23.04.0 \
    file://cpphelper.cpp;subdir=protocolgen-23.04.0 \
    file://cpphelper.h;subdir=protocolgen-23.04.0 \
    file://main.cpp;subdir=protocolgen-23.04.0 \
    file://nodetree.cpp;subdir=protocolgen-23.04.0 \
    file://nodetree.h;subdir=protocolgen-23.04.0 \
    file://typehelper.cpp;subdir=protocolgen-23.04.0 \
    file://typehelper.h;subdir=protocolgen-23.04.0 \
    file://xmlparser.cpp;subdir=protocolgen-23.04.0 \
    file://xmlparser.h;subdir=protocolgen-23.04.0 \
"

LIC_FILES_CHKSUM = "file://LGPL-2.0-or-later.txt;md5=6d2d9952d88b50a51a5c73dc431d06c7"

inherit cmake
inherit cmake_qt5
inherit cmake_kf5
inherit cmake_kdeapp

DEPENDS:= " \
    qtbase \
    cmake \
    extra-cmake-modules-native \
"

do_install() {
    install -d ${D}${bindir}
    install ${B}/protocolgen ${D}${bindir}
}


BBCLASSEXTEND="native nativesdk"