# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library to parse, convert, and manipulate KVTML files"
SUMMARY = "Library to parse, convert, and manipulate KVTML files"
HOMEPAGE = "https://invent.kde.org/education/libkeduvocdocument"
LICENSE = " BSD-1-Clause & GFDL-1.2-or-later & GPL-2.0-or-later"


inherit cmake_plasma
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    karchive \
    kio \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

