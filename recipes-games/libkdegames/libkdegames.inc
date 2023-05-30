# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Common code and data for many KDE games"
SUMMARY = "Common code and data for many KDE games"
HOMEPAGE = "https://invent.kde.org/games/libkdegames"
LICENSE = " BSD-2-Clause & BSD-3-Clause & CC0-1.0 & GFDL-1.2-or-later & GPL-2.0-or-later & ICS & LGPL-2.0-only & LGPL-2.0-or-later"


inherit cmake_plasma
inherit kconfig
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    karchive \
    kcompletion \
    kconfigwidgets \
    kdnssd \
    kguiaddons \
    kiconthemes \
    knewstuff \
    kservice \
    kwidgetsaddons \
    kxmlgui \
    openal-soft \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/carddecks/ \
    ${libdir}/qml/org/kde/games/core/ \
"