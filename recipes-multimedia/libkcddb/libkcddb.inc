# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library used to retrieve audio CD metadata from the Internet"
SUMMARY = "Library used to retrieve audio CD metadata from the Internet"
HOMEPAGE = "https://invent.kde.org/multimedia/libkcddb"
LICENSE = " BSD-3-Clause & CC0-1.0 & GFDL-1.2-or-later & GPL-2.0-or-later & LGPL-2.0-or-later"


inherit cmake_plasma
inherit kcmutils
inherit kconfig
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kconfigwidgets \
    kio \
    kwidgetsaddons \
    libmusicbrainz \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

