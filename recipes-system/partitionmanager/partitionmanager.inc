# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Manage the disk devices, partitions and file systems on your computer"
SUMMARY = "Manage the disk devices, partitions and file systems on your computer"
HOMEPAGE = "https://invent.kde.org/system/partitionmanager"
LICENSE = " CC-BY-4.0 & CC0-1.0 & GFDL-1.2-or-later & GPL-3.0-or-later & LGPL-3.0-or-later & MIT"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kconfigwidgets \
    kcrash \
    kdbusaddons \
    kio \
    kjobwidgets \
    kwidgetsaddons \
    kxmlgui \
    kpmcore \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/solid/actions \
"