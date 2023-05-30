# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Organizational assistant, providing calendars and other similar functionality"
SUMMARY = "Organizational assistant, providing calendars and other similar functionality"
HOMEPAGE = "https://invent.kde.org/pim/korganizer"
LICENSE = " BSD-3-Clause & CC0-1.0 & GFDL-1.2-or-later & GPL-2.0-or-later & LGPL-2.0-or-later & Qt-Commercial-exception-1.0"


inherit cmake_plasma
inherit kcmutils
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg


DEPENDS = " \
    kcalendarcore \
    kconfigwidgets \
    kcontacts \
    kcrash \
    kholidays \
    kiconthemes \
    kitemviews \
    kjobwidgets \
    knewstuff \
    kparts \
    kwidgetsaddons \
    kwindowsystem \
    kxmlgui \
    kdiagram \
    akonadi \
    akonadi-calendar \
    akonadi-contacts \
    akonadi-mime \
    akonadi-notes \
    calendarsupport \
    eventviews \
    incidenceeditor \
    kcalutils \
    kidentitymanagement \
    kldap \
    kmailtransport \
    kmime \
    kontactinterface \
    kpimtextedit \
    libkdepim \
    pimcommon \
    kuserfeedback \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${libdir}/plugins/pim5/kcms/summary \
    ${libdir}/plugins/pim5/kcms/korganizer \
"