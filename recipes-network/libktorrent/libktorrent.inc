# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "BitTorrent protocol implementation"
SUMMARY = "BitTorrent protocol implementation"
HOMEPAGE = "https://invent.kde.org/network/libktorrent"
LICENSE = " BSD-3-Clause & CC0-1.0 & GPL-2.0-or-later & MIT"

SRC_URI += " \
    file://0001-fix-cross-compile-test-for-GMP-version.patch \
"

inherit cmake_plasma
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    karchive \
    kcrash \
    kio \
    solid \
    boost \
    gmp \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

