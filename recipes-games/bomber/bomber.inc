# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Bomber is a single player arcade game"
SUMMARY = "Bomber is a single player arcade game"
HOMEPAGE = "https://invent.kde.org/games/bomber"
LICENSE = " BSD-3-Clause & CC0-1.0 & GFDL-1.2-or-later & LGPL-2.0-or-later"


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

