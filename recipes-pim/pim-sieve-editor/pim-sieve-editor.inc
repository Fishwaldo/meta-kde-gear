# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Application to assist with editing IMAP Sieve filters"
SUMMARY = "Application to assist with editing IMAP Sieve filters"
HOMEPAGE = "https://invent.kde.org/pim/pim-sieve-editor"
LICENSE = " BSD-3-Clause & CC0-1.0 & GPL-2.0-or-later & LGPL-2.0-or-later"


inherit cmake_plasma
inherit reuse_license_checksums


DEPENDS = " \
    kimap \
    kmailtransport \
    kpimtextedit \
    libksieve \
    pimcommon \
    qtkeychain \
    kuserfeedback \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

