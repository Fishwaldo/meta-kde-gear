# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library to assist working with calendars"
SUMMARY = "Library to assist working with calendars"
HOMEPAGE = "https://invent.kde.org/pim/kcalutils"
LICENSE = "BSD-3-Clause & CC0-1.0 & LGPL-2.0-or-later & LGPL-2.1-or-later"


inherit cmake_plasma
inherit kcoreaddons
inherit kconfig 
inherit ki18n
inherit reuse_license_checksums

DEPENDS = " \
    kcodecs \
    kwidgetsaddons \
    kiconthemes \
    grantlee \
    kcalendarcore \
    kidentitymanagement \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${libdir}/grantlee/5.3/ \
"