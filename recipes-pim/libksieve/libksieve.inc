# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library which manages Sieve support"
SUMMARY = "Library which manages Sieve support"
HOMEPAGE = "https://invent.kde.org/pim/libksieve"
LICENSE = " BSD-3-Clause & CC0-1.0 & GPL-2.0-only & GPL-2.0-or-later & LGPL-2.0-or-later"


inherit cmake_plasma
inherit reuse_license_checksums


DEPENDS = " \
    ktextaddons \
    kidentitymanagement \
    kimap \
    kmailtransport \
    kmime \
    kpimtextedit \
    libkdepim \
    pimcommon \
    qtwebengine \
    ktextaddons \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \ 
    ${datadir}/sieve/scripts/copy/ \
"
