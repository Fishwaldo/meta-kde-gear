# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library that provides cryptography support for mails "
SUMMARY = "Library that provides cryptography support for mails "
HOMEPAGE = "https://invent.kde.org/pim/libkleo"
LICENSE = "BSD-3-Clause & CC0-1.0 & GCC-exception-3.1 & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-or-later & LGPL-2.0-or-later"


inherit cmake_plasma
inherit ki18n
inherit kconfig
inherit kcoreaddons
inherit reuse_license_checksums

DEPENDS = " \
    kwidgetsaddons \
    kconfigwidgets \
    kcompletion \
    kcodecs \
    kitemmodels \
    kpimtextedit \
    gpgme \
    boost \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/libkleopatra/pics/ \
"