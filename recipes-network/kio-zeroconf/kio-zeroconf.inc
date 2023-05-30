# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KIO worker to discover file systems by DNS-SD (zeroconf)"
SUMMARY = "KIO worker to discover file systems by DNS-SD (zeroconf)"
HOMEPAGE = "https://invent.kde.org/network/kio-zeroconf"
LICENSE = " GPL-2.0-or-later & LGPL-2.0-only"


inherit cmake_plasma
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kdbusaddons \
    kdnssd \
    kio \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/remoteview \
"
