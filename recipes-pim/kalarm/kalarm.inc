# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Application to manage alarms and other timer-based alerts on the desktop"
SUMMARY = "Application to manage alarms and other timer-based alerts on the desktop"
HOMEPAGE = "https://invent.kde.org/pim/kalarm"
LICENSE = "BSD-3-Clause & CC0-1.0 & GFDL-1.2-or-later & GPL-2.0-or-later & LGPL-2.0-or-later"


inherit cmake_plasma
inherit kconfig
inherit ki18n
inherit kcmutils
inherit kdoctools
inherit reuse_license_checksums

DEPENDS = " \
    kcalendarcore \
    kcodecs \
    kcompletion \
    kconfigwidgets \
    kcontacts \
    kcrash \
    kdbusaddons \
    kglobalaccel \
    kguiaddons \
    kholidays \
    kidletime \
    kitemmodels \
    kjobwidgets \
    kio \
    knotifications \
    knotifyconfig \
    kservice \
    kwidgetsaddons \
    kwindowsystem \
    kxmlgui \
    phonon \
    kidentitymanagement \
    kmime \
    kpimtextedit \
    akonadi \
    akonadi-contacts \
    akonadi-mime \
    kmailtransport \
    calendarsupport \    
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${libdir}/grantlee/5.3/ \
    ${datadir}/icons/breeze/ \
    ${datadir}/icons/breeze-dark \
"