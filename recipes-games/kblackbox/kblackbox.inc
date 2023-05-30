# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KBlackBox is a game of hide and seek played on a grid of boxes"
SUMMARY = "KBlackBox is a game of hide and seek played on a grid of boxes"
HOMEPAGE = "https://invent.kde.org/games/kblackbox"
LICENSE = " BSD-3-Clause & CC0-1.0 & GFDL-1.2-or-later & GPL-2.0-or-later"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    karchive \
    kcrash \
    kdbusaddons \
    ktextwidgets \
    kxmlgui \
    libkdegames \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

