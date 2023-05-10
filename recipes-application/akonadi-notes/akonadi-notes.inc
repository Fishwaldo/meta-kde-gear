# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Libraries and daemons to implement note management in Akonadi"
SUMMARY = "Libraries and daemons to implement note management in Akonadi"
HOMEPAGE = "invent.kde.org/pim/akonadi-notes"
LICENSE = "BSD-3-Clause & CC0-1.0 & LGPL-2.0-or-later"


inherit cmake_plasma
inherit ki18n
inherit reuse_license_checksums

DEPENDS = " \
    kmime \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

