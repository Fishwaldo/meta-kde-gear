# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Public Transport Assistance for Mobile Devices"
SUMMARY = "Public transport navigator"
HOMEPAGE = "https://invent.kde.org/utilities/ktrip"
LICENSE = " BSD-2-Clause & BSD-3-Clause & CC-BY-SA-4.0 & CC0-1.0 & GPL-2.0-only & GPL-3.0-only & LGPL-2.0-or-later & LicenseRef-KDE-Accepted-GPL"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kcontacts \
    kirigami \
    kitemmodels \
    kpublictransport \
    qqc2-desktop-style \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

