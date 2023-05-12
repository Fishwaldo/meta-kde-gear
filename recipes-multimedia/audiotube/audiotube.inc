# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Client for YouTube Music"
SUMMARY = "Client for YouTube Music"
HOMEPAGE = "https://invent.kde.org/multimedia/audiotube"
LICENSE = "BSD-2-Clause & CC0-1.0 & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & LGPL-2.1-or-later & LicenceRef-KDE-Accepted-GPL"


inherit cmake_plasma
inherit kcoreaddons
inherit ki18n
inherit pkgconfig
inherit reuse_license_checksums

DEPENDS = " \
    kirigami \
    kcrash \
    kwindowsystem \
    python3-pybind11 \
    python3-yt-dlp \
    python3-yt-dlp-native \
    python3-ytmusicapi \
    python3-ytmusicapi-native \
    kirigami-addons \
    python3 \
    python3-native \
"

RDEPENDS:${PN} += " \
    python3-yt-dlp \
    python3-ytmusicapi \
    python3-requests \
    python3-asn1crypto \
    python3-certifi \
    python3-cffi \
    python3-chardet \
    python3-cryptography \
    python3-idna \
    python3-ndg-httpsclient \
    python3-pkg-resources \
    python3-ply \
    python3-pyasn1 \
    python3-pycparser \
    python3-pyopenssl \
    python3-pysocks \
    python3-setuptools \
    python3-six python3-urllib3 \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

