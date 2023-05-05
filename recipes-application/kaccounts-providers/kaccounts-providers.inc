# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Online account providers for the KAccounts system"
SUMMARY = "Online account providers for the KAccounts system"
HOMEPAGE = "https://invent.kde.org/network/kaccounts-providers"
LICENSE = " GPL-2.0-Or-Later & GPL-3.0-Or-Later & LGPL-2.0-Or-Later"


inherit cmake_plasma
inherit ki18n
inherit reuse_license_checksums

DEPENDS = " \
    kio \
    kdeclarative \
    kpackage \
    qtwebengine \
    intltool-native \
    kaccounts-integration \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/accounts/services/kde/ \
    ${datadir}/accounts/providers/kde/ \
    ${datadir}/kpackage/genericqml/ \
"
