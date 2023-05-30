# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Framework for interacting with systemd-journald"
SUMMARY = "Framework for interacting with systemd-journald"
HOMEPAGE = "https://invent.kde.org/system/kjournald"
LICENSE = "BSD-3-Clause & CC0-1.0 & LGPL-2.1-or-later & MIT"


inherit cmake_plasma
inherit ki18n
inherit kcoreaddons
inherit reuse_license_checksums

DEPENDS = " \
    qtquickcontrols2 \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

