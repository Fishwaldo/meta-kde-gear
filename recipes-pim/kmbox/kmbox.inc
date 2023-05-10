# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library for working with MBox format files"
SUMMARY = "Library for working with MBox format files "
HOMEPAGE = "invent.kde.org/pim/kmbox"
LICENSE = "BSD-3-Clause & CC0-1.0 & LGPL-2.0-only & LGPL-2.0-or-later"


inherit cmake_plasma
inherit reuse_license_checksums

DEPENDS = " \
    kmime \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

