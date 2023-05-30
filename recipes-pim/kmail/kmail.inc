# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "State-of-the-art feature-rich email client that supports many protocols"
SUMMARY = "State-of-the-art feature-rich email client that supports many protocols"
HOMEPAGE = "https://invent.kde.org/pim/kmail"
LICENSE = " BSD-3-Clause & CC0-1.0 & GFDL-1.2-or-later & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & LGPL-2.0-only & LGPL-2.0-or-later & LicenseRef-KDE-Accepted-GPL & Qt-Commercial-exception-1.0"


inherit cmake_plasma
inherit kcmutils
inherit kconfig
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg


DEPENDS = " \
    kbookmarks \
    kcalendarcore \
    kconfigwidgets \
    kcontacts \
    kcrash \
    kdbusaddons \
    kguiaddons \
    kiconthemes \
    kio \
    kitemviews \
    kjobwidgets \
    knotifications \
    knotifyconfig \
    kparts \
    kservice \
    ktextwidgets \
    kwidgetsaddons \
    kwindowsystem \
    kxmlgui \
    sonnet \
    ktextaddons \
    akonadi \
    akonadi-contacts \
    akonadi-mime \
    akonadi-search \
    kcalutils \
    kidentitymanagement \
    kldap \
    kmailtransport \
    kmime \
    kontactinterface \
    kpimtextedit \
    ktnef \
    libgravatar \
    libkdepim \
    libkleo \
    libksieve \
    mailcommon \
    messagelib \
    pimcommon \
    qtkeychain \
    kuserfeedback \
    ktextaddons \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/icons/breeze-dark \
    ${datadir}/kmail2/pics/ \
    ${datadir}/akonadi/agents \
    ${libdir}/plugins/pim5/kcms/summary \
    ${libdir}/plugins/pim5/kcms/kmail \
    ${libdir}/plugins/pim5/akonadi/config \
"