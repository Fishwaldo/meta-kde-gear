# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Multimedia player with the focus on simplicity, not features"
SUMMARY = "Multimedia player with the focus on simplicity, not features"
HOMEPAGE = "https://invent.kde.org/multimedia/dragon"
LICENSE = "GFDL-1.2-or-later & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & LicenceRef-KDE-Accepted-GPL"


inherit cmake_plasma
inherit kconfig
inherit ki18n
inherit kcoreaddons
inherit kdoctools
inherit reuse_license_checksums

DEPENDS = " \
    kconfigwidgets \
    kcrash \
    kdbusaddons \
    kjobwidgets \
    kio \
    kparts \
    solid \
    kwidgetsaddons \
    kwindowsystem \
    kxmlgui \
    knotifications \
    phonon \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/solid/actions/ \
    ${datadir}kservices5/ServiceMenus \
    ${datadir}/icons/oxygen/ \
    ${datadir}/kservices5/ServiceMenus \
"