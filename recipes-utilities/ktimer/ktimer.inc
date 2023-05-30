# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Little tool to execute programs after some time"
SUMMARY = "Countdown Launcher"
HOMEPAGE = "https://invent.kde.org/utilities/ktimer"
LICENSE = " CC0-1.0"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kdbusaddons \
    kio \
    knotifications \
    kwidgetsaddons \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

