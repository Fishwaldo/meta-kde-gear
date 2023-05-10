# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library that provides Gravatar support "
SUMMARY = "Library that provides Gravatar support "
HOMEPAGE = "https://invent.kde.org/pim/libgravatar"
LICENSE = "BSD-3-Clause & CC0-1.0 & LGPL-2.1-or-later & LGPL-2.0-or-later"


inherit cmake_plasma
inherit ki18n
inherit kconfig
inherit reuse_license_checksums

DEPENDS = " \
    kwidgetsaddons \
    ktextwidgets \
    kio \
    pimcommon \    
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

