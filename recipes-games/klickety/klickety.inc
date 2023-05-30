# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Klickety is an adaptation of the Clickomania game"
SUMMARY = "Klickety is an adaptation of the Clickomania game"
HOMEPAGE = "https://invent.kde.org/games/klickety"
LICENSE = " BSD-3-Clause & CC0-1.0 & GFDL-1.2-or-later & GPL-2.0-or-later"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kconfigwidgets \
    kcrash \
    kdbusaddons \
    kio \
    kwidgetsaddons \
    kxmlgui \
    libkdegames \
"

RDEPENDS:${PN} += " \
    perl \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

