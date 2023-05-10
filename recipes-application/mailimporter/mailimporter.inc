# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library that implements importing of emails from various other email clients"
SUMMARY = "Library that implements importing of emails from various other email clients"
HOMEPAGE = "https://invent.kde.org/pim/mailimporter"
LICENSE = "BSD-3-Clause & CC0-1.0 & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & LGPL-2.0-or-later & LicenseRef-KDE-Accepted-GPL"


inherit cmake_plasma
inherit ki18n
inherit kconfig
inherit kcoreaddons
inherit reuse_license_checksums

DEPENDS = " \
    kio \
    karchive \
    akonadi \
    kmime \
    akonadi-mime \
    pimcommon \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

