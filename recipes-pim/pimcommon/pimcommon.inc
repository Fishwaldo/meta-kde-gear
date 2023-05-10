# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Common library components for KDE PIM "
SUMMARY = "Common library components for KDE PIM "
HOMEPAGE = "https://invent.kde.org/pim/pimcommon"
LICENSE = "BSD-3-Clause & CC0-1.0 & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & LGPL-2.0-or-later & LicenseRef-KDE-Accepted-GPL"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit ki18n
inherit kcmutils
inherit reuse_license_checksums

DEPENDS = " \
    karchive \
    kcodecs \
    kcontacts \
    kitemmodels \
    kjobwidgets \
    kio \
    knewstuff \
    purpose \
    kservice \
    kwidgetsaddons \
    kxmlgui \
    akonadi \
    akonadi-contacts \
    kimap \
    kldap \
    libkdepim \
    kpimtextedit \
    akonadi-search \
    ktextwidgets \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

