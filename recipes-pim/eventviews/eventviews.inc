# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library for displaying and creating events and calendars"
SUMMARY = "Library for displaying and creating events and calendars"
HOMEPAGE = "https://invent.kde.org/pim/eventviews"
LICENSE = "BSD-3-Clause & CC0-1.0 & GPL-2.0-or-later & LGPL-2.0-or-later & Qt-Commercial-exception-1.0"


inherit cmake_plasma
inherit ki18n
inherit reuse_license_checksums

DEPENDS = " \
    akonadi \
    kcodecs \
    kguiaddons \
    kiconthemes \
    kitemmodels \
    kservice \
    kcompletion \
    kholidays \
    kcontacts \
    kconfigwidgets \
    libkdepim \
    calendarsupport \
    kcalendarcore \
    akonadi-calendar \
    kmime \
    kdiagram \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"