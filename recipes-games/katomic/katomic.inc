# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Katomic is a fun and educational game built around molecular geometry"
SUMMARY = "Katomic is a fun and educational game built around molecular geometry"
HOMEPAGE = "https://invent.kde.org/games/katomic"
LICENSE = " BSD-3-Clause & CC0-1.0 & GFDL-1.2-or-later & GPL-2.0-or-later"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kcrash \
    kdbusaddons \
    knewstuff \
    kwidgetsaddons \
    kxmlgui \
    libkdegames \
"
RDEPENDS:${PN} += " \
    perl \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

