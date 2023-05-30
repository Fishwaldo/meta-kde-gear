# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Learn The Alphabet"
SUMMARY = "Learn The Alphabet"
HOMEPAGE = "https://invent.kde.org/education/klettres"
LICENSE = " GPL-2.0-or-later & LGPL-2.0-only"


inherit cmake_plasma
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kconfigwidgets \
    kcrash \
    knewstuff \
    kwidgetsaddons \
    kxmlgui \
    phonon \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

