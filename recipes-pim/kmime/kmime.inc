# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library to assist handling MIME data "
SUMMARY = "Library to assist handling MIME data "
HOMEPAGE = "invent.kde.org/pim/kmime"
LICENSE = "BSD-3-Clause & CC0-1.0 & GPL-2.0-only & LGPL-2.0-only & LGPL-2.0-or-later"


inherit cmake_plasma
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg

DEPENDS = " \
    kcodecs \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

