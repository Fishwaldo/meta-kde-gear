# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Palapeli is a single-player jigsaw puzzle game"
SUMMARY = "Palapeli is a single-player jigsaw puzzle game"
HOMEPAGE = "https://invent.kde.org/games/palapeli"
LICENSE = " BSD-3-Clause & CC0-1.0 & GFDL-1.2-or-later & GPL-2.0-or-later & LGPL-2.0-or-later"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg
inherit mime


DEPENDS = " \
    karchive \
    kcompletion \
    kconfigwidgets \
    kcrash \
    kio \
    kitemviews \
    knotifications \
    kservice \
    kwidgetsaddons \
    kxmlgui \
    libkdegames \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/mime/packages \
    ${datadir}/kio/servicemenus \
"