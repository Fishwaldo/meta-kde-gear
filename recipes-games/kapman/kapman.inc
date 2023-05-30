# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Kapman is a clone of the well known game Pac-Man"
SUMMARY = "Kapman is a clone of the well known game Pac-Man"
HOMEPAGE = "https://invent.kde.org/games/kapman"
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
    kxmlgui \
    libkdegames \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

