# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Itinerary and boarding pass management application"
SUMMARY = "Itinerary and boarding pass management application"
HOMEPAGE = "https://invent.kde.org/pim/itinerary"
LICENSE = " Apache-2.0 & BSD-3-Clause & CC0-1.0 & LGPL-2.0-or-later"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg


DEPENDS = " \
    karchive \
    kcontacts \
    kholidays \
    kirigami \
    kitemmodels \
    knotifications \
    kunitconversion \
    prison \
    kirigami-addons \
    kosmindoormap \
    kpublictransport \
    khealthcertificate \
    kitinerary \
    kpkpass \
    kcrash \
    kdbusaddons \
    kfilemetadata \
    kio \
    kwindowsystem \
    qqc2-desktop-style \
    networkmanager-qt \
    qtlocation \
    kpublictransport \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${libdir}/qml/org/kde/solidextras/ \
    ${libdir}/libSolidExtras.so \
"

FILES:${PN}-dev = ""