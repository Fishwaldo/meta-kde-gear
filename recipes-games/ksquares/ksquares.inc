# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KSquares is modeled after the well known pen and paper based game of Dots and Boxes"
SUMMARY = "KSquares is modeled after the well known pen and paper based game of Dots and Boxes"
HOMEPAGE = "https://invent.kde.org/games/ksquares"
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

