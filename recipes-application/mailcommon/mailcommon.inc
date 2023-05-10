# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library which provides support for mail applications"
SUMMARY = "Library which provides support for mail applications"
HOMEPAGE = "https://invent.kde.org/pim/mailcommon"
LICENSE = "BSD-3-Clause & CC0-1.0 & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & LGPL-2.0-only & LGPL-2.0-or-later & LGPL-3.0-only & LicenseRef-KDE-Accepted-GPL & LicenseRef-KDE-Accepted-LGPL"


inherit cmake_plasma
inherit ki18n
inherit kconfig
inherit kcoreaddons
inherit reuse_license_checksums

DEPENDS = " \
    karchive \
    kcompletion \
    kiconthemes \
    kitemmodels \
    kitemviews \
    kio \
    ktextwidgets \
    kwidgetsaddons \
    kxmlgui \
    kdbusaddons \
    syntax-highlighting \
    kguiaddons \
    kcodecs \
    akonadi \
    akonadi-mime \
    libkdepim \
    mailimporter \
    kmailtransport \
    kmime \
    gpgme \
    messagelib \
    phonon \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

