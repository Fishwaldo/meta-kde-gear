# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Handy timer for steeping tea"
SUMMARY = "Tea Cooker"
HOMEPAGE = "https://invent.kde.org/utilities/kteatime"
LICENSE = " CC0-1.0 & GFDL-1.2-or-later & GPL-2.0-or-later"


inherit cmake_plasma
inherit kconfig
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kcrash \
    kiconthemes \
    knotifications \
    knotifyconfig \
    ktextwidgets \
    kxmlgui \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

