# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library that provides calendar support for PIM "
SUMMARY = "Library that provides calendar support for PIM "
HOMEPAGE = "https://invent.kde.org/pim/calendarsupport"
LICENSE = "BSD-3-Clause & CC0-1.0 & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & LGPL-2.0-or-later & LicenseRef-KDE-Accepted-GPL & LicenseRef-KDE-Accepted-LGPL"


inherit cmake_plasma
inherit ki18n
inherit kdoctools
inherit reuse_license_checksums

DEPENDS = " \
    akonadi \
    kguiaddons \
    kio \
    kmime \
    akonadi-mime \
    kcodecs \
    kcalutils \
    kcalendarcore \
    kidentitymanagement \
    kholidays \
    akonadi-calendar \
    akonadi-notes \
    kpimtextedit \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"