# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "OTP client for Plasma Mobile and Desktop"
SUMMARY = "Two-factor code generator for Plasma Mobile and Desktop"
HOMEPAGE = "https://invent.kde.org/utilities/keysmith"
LICENSE = " BSD-2-Clause & CC-BY-SA-4.0 & CC0-1.0 & GPL-3.0-or-later"


inherit cmake_plasma
inherit kconfig
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg


DEPENDS = " \
    kguiaddons \
    kirigami \
    kwidgetsaddons \
    kdbusaddons \
    kwindowsystem \
    libsodium \
    gettext \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

