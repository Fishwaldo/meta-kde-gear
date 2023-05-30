# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Naval Battle is a ship sinking game"
SUMMARY = "Naval Battle is a ship sinking game"
HOMEPAGE = "https://invent.kde.org/games/knavalbattle"
LICENSE = " BSD-3-Clause & CC0-1.0 & GPL-2.0-or-later"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg


DEPENDS = " \
    kcrash \
    kdbusaddons \
    kdnssd \
    ktextwidgets \
    kxmlgui \
    libkdegames \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

