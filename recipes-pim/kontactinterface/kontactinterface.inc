# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Support libraries to assist integration with Kontact"
SUMMARY = "Support libraries to assist integration with Kontact"
HOMEPAGE = "https://invent.kde.org/pim/kontactinterface"
LICENSE = "BSD-3-Clause & CC0-1.0 & LGPL-2.0-only & LGPL-2.0-or-later & LGPL-2.1-or-later & LGPL-3.0-only & LicenseRef-KDE-Accepted-LGPL"


inherit cmake_plasma
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums

DEPENDS = " \
    kparts \
    kwindowsystem \
    kxmlgui \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

