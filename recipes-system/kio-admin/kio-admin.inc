# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Manage files as administrator using the admin:// KIO protocol."
SUMMARY = "Manage files as administrator using the admin:// KIO protocol."
HOMEPAGE = "https://invent.kde.org/system/kio-admin"
LICENSE = " BSD-3-Clause & CC0-1.0 & FSFAP & GPL-2.0-only & GPL-3.0-only & LicenseRef-KDE-Accepted-GPL"


inherit cmake_plasma
inherit reuse_license_checksums


DEPENDS = " \
    kio \
    polkit-qt-1 \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

