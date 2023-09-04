# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library components for messages (e.g. displaying Akonadi collections) "
SUMMARY = "Library components for messages (e.g. displaying Akonadi collections) "
HOMEPAGE = "https://invent.kde.org/pim/messagelib"
LICENSE = "BSD-3-Clause & BSL-1.0 & CC0-1.0 & GPL-2.0-only & GPL-2.0-or-later & GPL3.0-only & LGPL-2.0-only & LGPL-2.0-or-later & LGPL-3.0-only & LicenseRef-KDE-Accepted-GPL & LicenseRef-KDE-Accepted-LGPL & Qt-Commercial-exception-1.0"

SRC_URI += " \
    file://0001-Add-Qt-PrinterSupport.patch \
"

inherit cmake_plasma
inherit kcoreaddons
inherit kconfig 
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums

DEPENDS = " \
    kcodecs \
    knewstuff \
    gpgme \
    karchive \
    kcompletion \
    kiconthemes \
    kitemviews \
    kjobwidgets \
    kio \
    kservice \
    sonnet \
    ktextwidgets \
    kwidgetsaddons \
    kxmlgui \
    syntax-highlighting \
    kdbusaddons \
    kguiaddons \
    knotifications \
    grantlee \
    akonadi \
    akonadi-mime \
    grantleetheme \
    libgravatar \
    kidentitymanagement \
    libkleo \
    kmailtransport \
    kmbox \
    kmime \
    ktexteditor \
    libkdepim \
    qtwebengine \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${libdir}/plugins/pim5/messageviewer \
    ${datadir}/libmessageviewer \
    ${datadir}/messageviewer/ \
    ${datadir}/org.kde.syntax-highlighting/syntax \
    ${datadir}/messagelist/pics/ \
"