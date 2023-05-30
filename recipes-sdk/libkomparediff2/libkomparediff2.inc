# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library to compare files and strings, used in Kompare and KDevelop"
SUMMARY = "Library to compare files and strings, used in Kompare and KDevelop"
HOMEPAGE = "https://invent.kde.org/sdk/libkomparediff2"
LICENSE = " GPL-2.0-or-later & LGPL-2.0-or-later"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kio \
    kxmlgui \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

