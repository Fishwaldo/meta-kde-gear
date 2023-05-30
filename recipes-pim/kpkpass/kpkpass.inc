# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Apple Wallet Pass reader"
SUMMARY = "Apple Wallet Pass reader"
HOMEPAGE = "https://invent.kde.org/pim/kpkpass"
LICENSE = " BSD-3-Clause & CC0-1.0 & LGPL-2.0-or-later"


inherit cmake_plasma
inherit reuse_license_checksums
inherit mime


DEPENDS = " \
    karchive \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/mime/packages/ \
"

