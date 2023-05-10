# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Calendar for Plasma Mobile"
SUMMARY = "Calendar for Plasma Mobile"
HOMEPAGE = "https://invent.kde.org/plasma-mobile/calindori"
LICENSE = "BSD-3-Clause & CC0-1.0 & GFDL-1.2-or-later & GPL-2.0-or-later & LGPL-2.0-or-later & Qt-Commercial-exception-1.0"


inherit cmake_plasma
inherit kcmutils
inherit kcoreaddons
inherit ki18n
inherit kdoctools
inherit reuse_license_checksums

DEPENDS = " \
    kcrash \
    akonadi \
    libkdepim \
    akonadi-search \
    akonadi-contacts \
    grantleetheme \
    prison \
    kpimtextedit \
    kontactinterface \
    pimcommon \
    kuserfeedback \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${libdir}/plugins/pim5/kcms/kaddressbook \
"