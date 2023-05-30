# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plugins for the thumbnailing system"
SUMMARY = "Plugins for the thumbnailing system"
HOMEPAGE = "https://invent.kde.org/sdk/kdesdk-thumbnailers"
LICENSE = " BSD-3-Clause & GPL-2.0-only & GPL-3.0-only & LicenseRef-KDE-Accepted-GPL"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kio \
    gettext \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

