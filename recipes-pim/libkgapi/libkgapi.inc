# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library for accessing various Google services via their public API"
SUMMARY = "Library for accessing various Google services via their public API"
HOMEPAGE = "invent.kde.org/pim/libkgapi"
LICENSE = "BSD-3-Clause & CC0-1.0 & LGPL-2.1-only & LGPL-3.0-only & LicenseRef-KDE-Accepted-LGPL"


inherit cmake_plasma
inherit reuse_license_checksums

DEPENDS = " \
    kcalendarcore \
    kcontacts \
    cyrus-sasl \
    kwallet \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${libdir}/sasl2/ \
    ${libdir}/libKPim5GAPI*.so \
"

INSANE_SKIP:${PN} = "dev-so"
