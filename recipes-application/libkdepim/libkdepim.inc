# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library for common KDE PIM applications "
SUMMARY = "Library for common KDE PIM applications "
HOMEPAGE = "https://invent.kde.org/pim/libkdepim"
LICENSE = "BSD-3-Clause & CC0-1.0 & GPL-2.0-or-later & LGPL-2.0-or-later & Qt-Commercial-exception-1.0"


inherit cmake_plasma
inherit kconfig 
inherit ki18n
inherit reuse_license_checksums

DEPENDS = " \
    kcompletion \
    kwidgetsaddons \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

