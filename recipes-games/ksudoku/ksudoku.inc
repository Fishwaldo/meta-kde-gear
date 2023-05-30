# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KSudoku is a logic-based symbol placement puzzle"
SUMMARY = "KSudoku is a logic-based symbol placement puzzle"
HOMEPAGE = "https://invent.kde.org/games/ksudoku"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=7974e16b472f00bbbadf2d006aa00c50"

inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n

DEPENDS = " \
    karchive \
    kconfigwidgets \
    kcrash \
    kguiaddons \
    kiconthemes \
    kio \
    kjobwidgets \
    kwidgetsaddons \
    kxmlgui \
    libkdegames \
"

