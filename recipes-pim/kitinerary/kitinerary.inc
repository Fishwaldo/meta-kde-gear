# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Data Model and Extraction System for Travel Reservation information"
SUMMARY = "Data Model and Extraction System for Travel Reservation information"
HOMEPAGE = "https://invent.kde.org/pim/kitinerary"
LICENSE = " BSD-2-Clause & BSD-3-Clause & CC0-1.0 & LGPL-2.0-or-later & ODbL-1.0"


inherit cmake_plasma
inherit ki18n
inherit reuse_license_checksums
inherit mime


DEPENDS = " \
    kcalendarcore \
    kcodecs \
    kcontacts \
    kmime \
    kpkpass \
    zxing-cpp \
    poppler \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/mime/packages/ \
"