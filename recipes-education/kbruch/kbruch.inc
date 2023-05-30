# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Practice Fractions"
SUMMARY = "Exercise Fractions"
HOMEPAGE = "https://invent.kde.org/education/kbruch"
LICENSE = " CC0-1.0 & GFDL-1.2-only & GPL-2.0-or-later"


inherit cmake_plasma
inherit kconfig
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kcrash \
    kwidgetsaddons \
    kxmlgui \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

