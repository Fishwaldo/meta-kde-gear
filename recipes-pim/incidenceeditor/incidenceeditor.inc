# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library that provides calendar incidence editor"
SUMMARY = "Library that provides calendar incidence editor"
HOMEPAGE = "https://invent.kde.org/pim/incidenceeditor"
LICENSE = " BSD-3-Clause & CC0-1.0 & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & LGPL-2.0-or-later & LicenseRef-KDE-Accepted-GPL & Qt-Commercial-exception-1.0"


inherit cmake_plasma
inherit reuse_license_checksums


DEPENDS = " \
    kcalendarcore \
    kdiagram \
    akonadi \
    akonadi-mime \
    calendarsupport \
    eventviews \
    kcalutils \
    kldap \
    kmime \
    libkdepim \
    pimcommon \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

