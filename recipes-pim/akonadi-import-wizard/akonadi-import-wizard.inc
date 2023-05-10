# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Assistant to import external PIM data into Akonadi for use in KDE PIM apps"
SUMMARY = "Assistant to import external PIM data into Akonadi for use in KDE PIM apps"
HOMEPAGE = "https://invent.kde.org/pim/akonadi-import-wizard"
LICENSE = "BSD-3-Clause & CC0-1.0 & GFDL-1.2-or-later & GPL-2.0-or-later & LGPL-2.0-or-later"


inherit cmake_plasma
inherit kconfig 
inherit kauth
inherit kdoctools
inherit reuse_license_checksums

DEPENDS = " \
    kdbusaddons \
    kcrash \
    kio \
    karchive \
    akonadi \
    kcontacts \
    kidentitymanagement \
    kmailtransport \
    mailcommon \
    mailimporter \
    messagelib \
    qtkeychain \
"
 
KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/importwizard/pics/ \
"


