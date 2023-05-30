# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KIO Slave to access Google Drive"
SUMMARY = "KIO Slave to access Google Drive"
HOMEPAGE = "https://invent.kde.org/network/kio-gdrive"
LICENSE = " GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & GPL-3.0-or-later & LicenseRef-KDE-Accepted-GPL"


inherit cmake_plasma
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kio \
    purpose \
    libkgapi \
    qtkeychain \
    kaccounts-integration \
    intltool-native \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/remoteview \
    ${datadir}/purpose \
    ${datadir}/accounts/services/kde \
"
