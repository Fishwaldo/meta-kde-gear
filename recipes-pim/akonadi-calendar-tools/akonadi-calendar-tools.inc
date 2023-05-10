# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "onsole applications and utilities for managing calendars in Akonadi"
SUMMARY = "onsole applications and utilities for managing calendars in Akonadi"
HOMEPAGE = "https://invent.kde.org/pim/akonadi-calendar-tools"
LICENSE = "BSD-3-Clause & CC0-1.0 & GFDL-1.2-or-later & GPL-2.0-or-later & Qt-Commercial-exception-1.0"


inherit cmake_plasma
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums

DEPENDS = " \
    akonadi \
    kcalendarcore \
    akonadi-calendar \
    calendarsupport \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/akonadi/plugins/serializer \
"