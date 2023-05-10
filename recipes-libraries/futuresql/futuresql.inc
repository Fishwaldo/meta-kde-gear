# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
# SPDX-License-Identifier: MIT

DESCRIPTION = "Non-blocking Qt database framework"
SUMMARY = "Non-blocking Qt database framework"
HOMEPAGE = "https://invent.kde.org/libraries/futuresql"
LICENSE = "BSD-2-Clause & LGPL-2.1-only & LGPL-3.0-only & LicenceRef-KDE-Accepted-LGPL"


inherit cmake_plasma
inherit reuse_license_checksums

DEPENDS = " \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

