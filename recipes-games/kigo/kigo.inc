# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Kigo is an open-source implementation of the popular Go game"
SUMMARY = "Kigo is an open-source implementation of the popular Go game"
HOMEPAGE = "https://invent.kde.org/games/kigo"
LICENSE = " BSD-3-Clause & CC0-1.0 & GFDL-1.2-or-later & GPL-2.0-only & GPL-3.0-only & LicenseRef-KDE-Accepted-GPL"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg


DEPENDS = " \
    kconfigwidgets \
    kcrash \
    kdbusaddons \
    kio \
    knewstuff \
    ktextwidgets \
    kxmlgui \
    libkdegames \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

