# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library, KCM and KDED module to manage mail transport "
SUMMARY = "Library, KCM and KDED module to manage mail transport "
HOMEPAGE = "https://invent.kde.org/pim/kmailtransport"
LICENSE = "BSD-3-Clause & CC0-1.0 & LGPL-2.0-or-later & LGPL-2.1-or-later"

inherit cmake_plasma
inherit kcmutils 
inherit kcoreaddons
inherit ki18n
inherit kconfig
inherit kdoctools 
inherit reuse_license_checksums
inherit mime-xdg

DEPENDS = " \
    kwallet \
    kio \
    kmime \
    akonadi-mime \
    akonadi \
    ksmtp \
    libkgapi \
    qtkeychain \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

