# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Akonadi agents and resources"
SUMMARY = "Akonadi agents and resources"
HOMEPAGE = "https://invent.kde.org/pim/kdepim-runtime"
LICENSE = "AGPL-3.0-or-later & BSD-2-Clause & BSD-3-Clause & CC0-1.0 & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & GPL-3.0-or-later & LGPL-2.0-only & LGPL-2.0-or-later & LGPL-2.1-or-later & LGPL-3.0-only & LGPL-3.0-or-later & LicenseRef-KDE-Accepted-GPL & LicenseRef-KDE-Accepted-LGPL"

inherit cmake_plasma
inherit kcmutils 
inherit kcoreaddons
inherit ki18n
inherit kconfig
inherit kdoctools 
inherit reuse_license_checksums
inherit mime-xdg

DEPENDS = " \
    shared-mime-info \
    cyrus-sasl \
    qca \
    qtspeech \
    kconfigwidgets \ 
    knotifications \
    kio \
     kcodecs \
    kwindowsystem \
    ktextwidgets \ 
    kholidays \ 
    kdav \ 
    qtnetworkauth \
    qtwebengine \
    knotifyconfig \
    akonadi \
    akonadi-mime \
    kmailtransport \
    kidentitymanagement \
    akonadi-contacts \
    kcalutils \
    kmbox \
    kimap \
    akonadi-notes \
    akonadi-calendar \
    libkdepim \
    kldap \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/akonadi/agents \
    ${datadir}/akonadi/accountwizard \
    ${datadir}/akonadi/firstrun \
    ${datadir}/kservices5/akonadi \
    ${datadir}/mime/packages \
    ${libdir}/plugins/pim5/akonadi/config \
    ${libdir}/plugins/pim5/kcms/kaddressbook \
"