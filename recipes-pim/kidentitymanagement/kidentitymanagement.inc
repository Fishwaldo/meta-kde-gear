# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library to assist in handling user identities"
SUMMARY = "Library to assist in handling user identities"
HOMEPAGE = "https://invent.kde.org/pim/kidentitymanagement"
LICENSE = "BSD-3-Clause & CC0-1.0 & LGPL-2.0-or-later & LGPL-2.1-or-later"

inherit cmake_plasma
inherit kcoreaddons
inherit kconfig
inherit reuse_license_checksums

DEPENDS = " \
    ktextwidgets \
    kxmlgui \
    kio \
    kcodecs \
    kpimtextedit \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

