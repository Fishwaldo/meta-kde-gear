# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Kolf is a miniature golf game with 2d top-down view"
SUMMARY = "Miniature Golf"
HOMEPAGE = "https://invent.kde.org/games/kolf"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=35f9996f09e5a4e3572e595b4adbf9b7"

inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit mime-xdg

DEPENDS = " \
    kcompletion \
    kconfigwidgets \
    kcrash \
    kdbusaddons \
    kio \
    ktextwidgets \
    kwidgetsaddons \
    kxmlgui \
    libkdegames \
"

