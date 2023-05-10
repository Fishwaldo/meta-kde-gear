# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library to assist working with LDAP directories "
SUMMARY = "Library to assist working with LDAP directories "
HOMEPAGE = "https://invent.kde.org/pim/kldap"
LICENSE = "BSD-3-Clause & CC0-1.0 & LGPL-2.0-or-later & MIT"

inherit cmake_plasma
inherit kcoreaddons
inherit ki18n
inherit kdoctools
inherit reuse_license_checksums

DEPENDS = " \
    kio \
    qtkeychain \
    openldap \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

