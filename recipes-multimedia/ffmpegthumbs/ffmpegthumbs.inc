# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "FFmpeg-based thumbnail creator for video files"
SUMMARY = "FFmpeg-based thumbnail creator for video files"
HOMEPAGE = "https://invent.kde.org/multimedia/ffmpegthumbs"
LICENSE = " BSD-3-Clause & GPL-2.0-or-later"


inherit cmake_plasma
inherit kconfig
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kio \
    ffmpeg \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

