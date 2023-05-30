# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KTuberling is a simple constructor game suitable for children and adults alike"
SUMMARY = "A simple constructor game suitable for children and adults alike"
HOMEPAGE = "https://invent.kde.org/games/ktuberling"
LICENSE = " GFDL-1.2-or-later & GPL-2.0-or-later"


inherit cmake_plasma
inherit kconfig
inherit ki18n
inherit kcoreaddons
inherit kdoctools
inherit reuse_license_checksums
inherit mime-xdg


DEPENDS = " \
    kcompletion \
    kconfigwidgets \
    kcrash \
    kdbusaddons \
    kio \
    kwidgetsaddons \
    kxmlgui \
    libkdegames \
    qtmultimedia \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

