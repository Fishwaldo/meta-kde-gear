# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
# SPDX-License-Identifier: MIT

DESCRIPTION = "VLC backend for the Phonon multimedia library"
SUMMARY = "VLC backend for the Phonon multimedia library"
HOMEPAGE = "https://invent.kde.org/libraries/phonon-vlc"
LICENSE = "LGPL-2.1-only"


inherit cmake_plasma
inherit reuse_license_checksums

DEPENDS = " \
    phonon \
    vlc \
"


