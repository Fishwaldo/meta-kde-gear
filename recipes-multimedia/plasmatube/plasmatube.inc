# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Kirigami YouTube video player based on QtMultimedia and youtube-dl"
SUMMARY = "Kirigami YouTube video player based on QtMultimedia and youtube-dl"
HOMEPAGE = "https://invent.kde.org/multimedia/plasmatube"
LICENSE = "CC-BY-SA-4.0 & CC0-1.0 & GPL-2.0-or-later & GPL-3.0-or-later"


inherit cmake_plasma
inherit kconfig
inherit ki18n
inherit kcoreaddons
inherit pkgconfig   
inherit reuse_license_checksums

DEPENDS = " \
    kirigami \
    mpv \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"