# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KBreakout is a Breakout-like game. Its objective is to destroy as many bricks as possible without losing the ball."
SUMMARY = "KBreakout is a Breakout-like game. Its objective is to destroy as many bricks as possible without losing the ball."
HOMEPAGE = "https://invent.kde.org/games/kbreakout"
LICENSE = " BSD-3-Clause & CC0-1.0 & GFDL-1.2-or-later & GPL-2.0-or-later"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kconfigwidgets \
    kcrash \
    kdbusaddons \
    kwidgetsaddons \
    kxmlgui \
    libkdegames \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

