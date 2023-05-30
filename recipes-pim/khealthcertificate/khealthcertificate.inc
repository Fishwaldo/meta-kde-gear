# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Handling of digital vaccination, test and recovery certificates."
SUMMARY = "Handling of digital vaccination, test and recovery certificates."
HOMEPAGE = "https://invent.kde.org/pim/khealthcertificate"
LICENSE = " Apache-2.0 & BSD-3-Clause & CC-BY-3.0 & CC-BY-4.0 & CC0-1.0 & EUPL-1.2 & LGPL-2.0-or-later & MIT & W3C-20150513"


inherit cmake_plasma
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    karchive \
    kcodecs \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${libdir}/qml/org/kde/khealthcertificate/ \
"