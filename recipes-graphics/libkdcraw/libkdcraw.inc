# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "C++ interface around LibRaw library used to decode RAW picture files"
SUMMARY = "C++ interface around LibRaw library used to decode RAW picture files"
HOMEPAGE = "https://invent.kde.org/graphics/libkdcraw"
LICENSE = "BSD-3-Clause & GPL-2.0-or-later"


inherit cmake_plasma
inherit reuse_license_checksums
inherit pkgconfig

DEPENDS = " \
    libraw \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

