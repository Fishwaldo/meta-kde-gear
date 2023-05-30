# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Displays available storage devices and information about their usage"
SUMMARY = "Displays available storage devices and information about their usage"
HOMEPAGE = "https://invent.kde.org/utilities/kdf"
LICENSE = " CC0-1.0 & GPL-2.0-or-later"


inherit cmake_plasma
inherit kcmutils
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit reuse_license_checksums


DEPENDS = " \
    kio \
    knotifications \
    kwidgetsaddons \
    kxmlgui \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

