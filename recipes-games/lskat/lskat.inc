# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Lieutenant Skat (from German Offiziersskat) is a fun and engaging card game for two players"
SUMMARY = "Lieutenant Skat (from German Offiziersskat) is a fun and engaging card game for two players"
HOMEPAGE = "https://invent.kde.org/games/lskat"
LICENSE = " BSD-3-Clause & CC0-1.0 & GFDL-1.2-or-later & LGPL-2.0-or-later & LGPL-2.0-only & GFDL-1.2-or-later"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kcrash \
    kdbusaddons \
    kxmlgui \
    libkdegames \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

