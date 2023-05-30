# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Additional components to increase the functionality of KIO"
SUMMARY = "Additional components to increase the functionality of KIO"
HOMEPAGE = "https://invent.kde.org/network/kio-extras"
LICENSE = " BSD-2-Clause & BSD-3-Clause & CC0-1.0 & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & GPL-3.0-or-later & LGPL-2.0-only & LGPL-2.0-or-later & LGPL-2.1-only & LGPL-2.1-or-later & LGPL-3.0-only & LicenseRef-KDE-Accepted-GPL & LicenseRef-KDE-Accepted-LGPL & MIT"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums
inherit mime


DEPENDS = " \
    kactivities \
    karchive \
    kbookmarks \
    kconfigwidgets \
    kdbusaddons \
    kdnssd \
    kguiaddons \
    kio \
    solid \
    syntax-highlighting \
    libkexiv2 \
    phonon \
    kactivities-stats \
    samba \
    libssh \
    libmtp \
    libimobiledevice \
    libplist \
    taglib \
    gperf \
    kdsoap-ws-discovery-client \
"

RDEPENDS:${PN} += " \
    perl \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/kio_bookmarks \
    ${datadir}/kio_info \
    ${datadir}/kio_docfilter \
    ${datadir}/konqueror/dirtree/remote \
    ${datadir}/solid/actions \
    ${datadir}/remoteview \
    ${datadir}/mime/packages \
"