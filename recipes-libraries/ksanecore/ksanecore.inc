# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library providing logic to interface scanners"
SUMMARY = "Library providing logic to interface scanners"
HOMEPAGE = "https://invent.kde.org/libraries/ksanecore"
LICENSE = " BSD-2-Clause & BSD-3-Clause & CC0-1.0 & LGPL-2.1-only & LGPL-3.0-only & LicenseRef-KDE-Accepted-LGPL"


inherit cmake_plasma
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    sane-backends \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

