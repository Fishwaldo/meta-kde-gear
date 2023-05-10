# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Akonadi calendar integration"
SUMMARY = "Akonadi calendar integration"
HOMEPAGE = "https://invent.kde.org/pim/akonadi-calendar"
LICENSE = "BSD-3-Clause & CC0-1.0 & LGPL-2.0-or-later & LGPL-2.1-or-later"


inherit cmake_plasma
inherit kcmutils 
inherit kcoreaddons
inherit ki18n
inherit kconfig
inherit reuse_license_checksums
inherit mime-xdg

DEPENDS = " \
    kwidgetsaddons \
    kxmlgui \
    kio \
    kcodecs \
    kdbusaddons \
    knotifications \
    kcalendarcore \
    akonadi \
    kmime \
    kmailtransport \
    kidentitymanagement \
    kcalutils \
    akonadi-contacts \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/akonadi/plugins/serializer \
"