# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Kirigami-based RSS reader"
SUMMARY = "Feed reader for mobile devices"
HOMEPAGE = "https://invent.kde.org/network/alligator"
LICENSE = " BSD-2-Clause & BSD-3-Clause & CC-BY-SA-4.0 & CC0-1.0 & GPL-2.0-only & GPL-3.0-only & GPL-3.0-or-later & LicenseRef-KDE-Accepted-GPL"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kirigami \
    syndication \
    kirigami-addons \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

