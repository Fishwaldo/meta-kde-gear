# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "RSS Feed Reader"
SUMMARY = "RSS Feed Reader"
HOMEPAGE = "https://invent.kde.org/pim/akregator"
LICENSE = " BSD-2-Clause & BSD-3-Clause & CC0-1.0 & GFDL-1.2-or-later & GPL-2.0-or-later & LGPL-2.0-or-later & Qt-Commercial-exception-1.0"


inherit cmake_plasma
inherit reuse_license_checksums
inherit mime-xdg


DEPENDS = " \
    kcodecs \
    ktextaddons \
    akonadi-mime \
    grantleetheme \
    kontactinterface \
    kpimtextedit \
    libkdepim \
    messagelib \
    pimcommon \
    knotifyconfig \
    syndication \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${libdir}/plugins/pim5/kcms/akregator/ \
"