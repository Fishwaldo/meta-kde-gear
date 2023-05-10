# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library to assist working with IMAP servers "
SUMMARY = "Library to assist working with IMAP servers "
HOMEPAGE = "https://invent.kde.org/pim/kimap"
LICENSE = "BSD-3-Clause & CC0-1.0 & LGPL-2.0-only & LGPL-2.0-or-later"


inherit cmake_plasma
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums

DEPENDS = " \
    cyrus-sasl \
    kio \
    kmime \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

