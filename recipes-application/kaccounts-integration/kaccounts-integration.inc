# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Online account management system and its Plasma integration components"
SUMMARY = "Online account management system and its Plasma integration components"
HOMEPAGE = "https://invent.kde.org/network/kaccounts-integration"
LICENSE = "GPL-2.0-Only & GPL-2.0-Or-Later & GPL-3.0-Only & LGPL-2.0-Or-Later & LicenseRef-KDE-Accepted-GPL "


inherit cmake_plasma
inherit cmake_kdeapp
inherit cmake_sysroot
inherit ki18n
inherit kcmutils
inherit kcoreaddons
inherit kconfig
inherit reuse_license_checksums
inherit kdoctools  

DEPENDS = " \
    kdbusaddons \
    kdeclarative \
    kio \
    kwallet \
    libaccounts-qt \
    libsignon-qt \
    qcoro \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/kpackage/kcms/kcm_kaccounts/contents/ui \
"