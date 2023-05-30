# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Mathematical Function Plotter"
SUMMARY = "Mathematical Function Plotter"
HOMEPAGE = "https://invent.kde.org/education/kmplot"
LICENSE = "GFDL-1.2-or-later & GPL-2.0-or-later "


inherit cmake_plasma
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg


DEPENDS = " \
    kcrash \
    kguiaddons \
    kparts \
    kwidgetsaddons \
    kdbusaddons \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

