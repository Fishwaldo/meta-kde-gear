# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Volume control program"
SUMMARY = "Volume control program"
HOMEPAGE = "https://invent.kde.org/multimedia/kmix"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"


inherit cmake_plasma
inherit kconfig
inherit kdoctools
inherit ki18n

DEPENDS = " \
    kcompletion \
    kconfigwidgets \
    kcrash \
    kdbusaddons \
    kglobalaccel \
    knotifications \
    kwidgetsaddons \
    kwindowsystem \
    kxmlgui \
    solid \
"

