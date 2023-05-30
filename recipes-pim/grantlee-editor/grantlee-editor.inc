# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Utilities and tools to manage themes in KDE PIM applications"
SUMMARY = "Utilities and tools to manage themes in KDE PIM applications"
HOMEPAGE = "https://invent.kde.org/pim/grantlee-editor"
LICENSE = " BSD-3-Clause & CC0-1.0 & GFDL-1.2-or-later & GPL-2.0-or-later"


inherit cmake_plasma
inherit reuse_license_checksums


DEPENDS = " \
    akonadi-contacts \
    akonadi-mime \
    grantleetheme \
    kimap \
    kpimtextedit \
    messagelib \
    pimcommon \
    grantlee \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

