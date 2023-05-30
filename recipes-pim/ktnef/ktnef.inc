# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Libraries to work with TNEF Email Attachments"
SUMMARY = "Libraries to work with TNEF Email Attachments"
HOMEPAGE = "https://invent.kde.org/pim/ktnef"
LICENSE = " BSD-3-Clause & CC0-1.0 & LGPL-2.0-or-later"


inherit cmake_plasma
inherit reuse_license_checksums


DEPENDS = " \
    kcalendarcore \
    kcontacts \
    kcalutils \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

