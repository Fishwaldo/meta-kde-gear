# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Kiriki is an addictive and fun dice game"
SUMMARY = "Kiriki is an addictive and fun dice game"
HOMEPAGE = "https://invent.kde.org/games/kiriki"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n

DEPENDS = " \
    kconfigwidgets \
    kcrash \
    kdbusaddons \
    kiconthemes \
    kxmlgui \
    libkdegames \
"

