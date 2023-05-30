# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Library for finding WS-Discovery devices in the network using Qt5 and KDSoap."
LICENSE = "CC0-1.0 & GPL-3.0-or-later"

inherit cmake_plasma
inherit reuse_license_checksums

KF5_REUSE_LICENSECHECK_ENABLED="1"

S="${WORKDIR}/git"

DEPENDS = " \
    kdsoap \
    kdsoap-native \
"

EXTRA_OECMAKE += "-DKDSOAP_KDWSDL2CPP_COMPILER=${STAGING_BINDIR_NATIVE}/kdwsdl2cpp"
