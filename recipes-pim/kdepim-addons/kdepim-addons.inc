# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Add-ons for KDE PIM apps (KMail, KAddressBook etc.)"
SUMMARY = "Add-ons for KDE PIM apps (KMail, KAddressBook etc.)"
HOMEPAGE = "https://invent.kde.org/pim/kdepim-addons"
LICENSE = " BSD-3-Clause & CC0-1.0 & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & LGPL-2.0-only & LGPL-2.0-or-later & LGPL-3.0-only & LicenseRef-KDE-Accepted-GPL & LicenseRef-KDE-Accepted-LGPL & Qt-Commercial-exception-1.0"


inherit cmake_plasma
inherit kconfig
inherit reuse_license_checksums


DEPENDS = " \
    kcalendarcore \
    kcontacts \
    kdbusaddons \
    kdeclarative \
    kguiaddons \
    kholidays \
    kiconthemes \
    kio \
    kparts \
    kxmlgui \
    prison \
    ktextaddons \
    akonadi \
    akonadi-calendar \
    akonadi-contacts \
    akonadi-import-wizard \
    akonadi-notes \
    calendarsupport \
    eventviews \
    grantleetheme \
    incidenceeditor \
    kaddressbook \
    kcalutils \
    kidentitymanagement \
    kimap \
    kitinerary \
    kmailtransport \
    kpimtextedit \
    kpkpass \
    ktnef \
    libgravatar \
    libkdepim \
    libkleo \
    libksieve \
    mailcommon \
    mailimporter \
    messagelib \
    pimcommon \
    grantlee \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${libdir}/plugins/pim5/pimcommon/customtools/ \
    ${libdir}/plugins/pim5/pimcommon/shorturlengine \
    ${libdir}/plugins/pim5/messageviewer \
    ${libdir}/plugins/pim5/kmail \
    ${libdir}/plugins/pim5/contacteditor \
    ${libdir}/plugins/pim5/kaddressbook \
    ${libdir}/plugins/plasmacalendarplugins \
    ${libdir}/qml/org/kde/plasma/PimCalendars \
    ${libdir}/plugins/pim5/webengineviewer/urlinterceptor \
    ${datadir}/qtcreator/templates \
"
