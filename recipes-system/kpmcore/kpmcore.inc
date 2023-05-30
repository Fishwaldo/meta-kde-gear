# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KDE Partition Manager core library"
SUMMARY = "KDE Partition Manager core library"
HOMEPAGE = "https://invent.kde.org/system/kpmcore"
LICENSE = " CC-BY-4.0 & CC0-1.0 & GPL-3.0-or-later & MIT"


inherit cmake_plasma
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kwidgetsaddons \
    polkit-qt-1 \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

