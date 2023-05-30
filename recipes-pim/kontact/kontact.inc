# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Container application to unify several major PIM applications"
SUMMARY = "Container application to unify several major PIM applications"
HOMEPAGE = "https://invent.kde.org/pim/kontact"
LICENSE = " BSD-3-Clause & CC0-1.0 & GFDL-1.2-or-later & GPL-2.0-or-later & LGPL-2.0-only & LGPL-2.0-or-later & Qt-Commercial-exception-1.0"


inherit cmake_plasma
inherit reuse_license_checksums


DEPENDS = " \
    akonadi \
    grantleetheme \
    kontactinterface \
    kpimtextedit \
    libkdepim \
    pimcommon \
    grantlee \
    qtwebengine \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/messageviewer/about/default \
    ${libdir}/plugins/pim5/kcms/kontact \
"