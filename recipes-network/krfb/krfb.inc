# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Desktop Sharing"
SUMMARY = "Desktop Sharing"
HOMEPAGE = "https://invent.kde.org/network/krfb"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=3c8ea28d12b8a786603a5394fc50096d"

inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n

DEPENDS = " \
    kcrash \
    kdbusaddons \
    kdnssd \
    knotifications \
    kwallet \
    kwayland \
    kwidgetsaddons \
    kwindowsystem \
    kxmlgui \
    plasma-wayland-protocols \
    kpipewire \
    qtwayland-native \
    libvncserver \
"

