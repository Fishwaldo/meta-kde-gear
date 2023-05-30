# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Pronunciation trainer to improve your skills by listening to native speakers"
SUMMARY = "Artikulate Pronunciation Trainer"
HOMEPAGE = "https://invent.kde.org/education/artikulate"
LICENSE = " BSD-2-Clause & CC-BY-SA-4.0 & CC0-1.0 & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & LGPL-2.0-or-later & LGPL-2.1-only & LGPL-2.1-or-later & LGPL-3.0-only & LGPL-3.0-or-later & LicenseRef-KDE-Accepted-GPL & LicenseRef-KDE-Accepted-LGPL & MIT"


inherit cmake_plasma
inherit kconfig
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    karchive \
    kcrash \
    kirigami \
    knewstuff \
    qtmultimedia \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

