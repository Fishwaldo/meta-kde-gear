# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Killbots is a simple game of evading killer robots"
SUMMARY = "Killbots is a simple game of evading killer robots"
HOMEPAGE = "https://invent.kde.org/games/killbots"
LICENSE = " BSD-3-Clause & CC0-1.0 & GFDL-1.2-or-later & GPL-2.0-or-later"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kcompletion \
    kconfigwidgets \
    kcrash \
    kdbusaddons \
    kwidgetsaddons \
    kxmlgui \
    libkdegames \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

