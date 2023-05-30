# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "A pixel measuring tool by KDE"
SUMMARY = "Screen Ruler"
HOMEPAGE = "https://invent.kde.org/graphics/kruler"
LICENSE = " GFDL-1.2-or-later & GPL-2.0-or-later"


inherit cmake_plasma
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    knotifications \
    kwindowsystem \
    kxmlgui \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

