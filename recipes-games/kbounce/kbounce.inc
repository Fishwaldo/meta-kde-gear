# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KBounce is a single player arcade game with the elements of puzzle"
SUMMARY = "KBounce is a single player arcade game with the elements of puzzle"
HOMEPAGE = "https://invent.kde.org/games/kbounce"
LICENSE = " BSD-3-Clause & CC0-1.0 & GFDL-1.2-or-later & LGPL-2.0-or-later"


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
    kio \
    kwidgetsaddons \
    kxmlgui \
    libkdegames \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

