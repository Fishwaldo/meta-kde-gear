# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library that provides extended text editor for PIM applications "
SUMMARY = "Library that provides extended text editor for PIM applications "
HOMEPAGE = "https://invent.kde.org/pim/kpimtextedit"
LICENSE = "BSD-3-Clause & CC0-1.0 & GPL-2.0-only & LGPL-2.0-or-later & GPL-3.0-only & LGPL-2.0-only & LGPL-2.0-or-later & LGPL-2.1-or-later & LGPL-3.0-only & LicenseRef-KDE-Accepted-GPL & LicenseRef-KDE-Accepted-LGPL"

inherit cmake_plasma
inherit kcoreaddons
inherit kconfig
inherit ki18n
inherit reuse_license_checksums

DEPENDS = " \
    kiconthemes \
    kio \
    sonnet \
    syntax-highlighting \
    kwidgetsaddons \
    kxmlgui \
    kcodecs \
    ktextaddons \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

