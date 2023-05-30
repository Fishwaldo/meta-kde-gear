# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Common code, backgrounds and tile sets for games using Mahjongg tiles"
SUMMARY = "Common code, backgrounds and tile sets for games using Mahjongg tiles"
HOMEPAGE = "https://invent.kde.org/games/libkmahjongg"
LICENSE = " BSD-3-Clause & CC0-1.0 & GPL-2.0-or-later"


inherit cmake_plasma
inherit reuse_license_checksums


DEPENDS = " \
    libkdegames \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/kmahjongglib/tilesets \
    ${datadir}/kmahjongglib/backgrounds \
"