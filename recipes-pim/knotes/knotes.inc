# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Note-taking application"
SUMMARY = "Note-taking application"
HOMEPAGE = "https://invent.kde.org/pim/knotes"
LICENSE = "BSD-3-Clause & CC0-1.0 & GFDL-1.2-or-later & GPL-2.0-or-later & LGPL-2.0-only & LGPL-2.0-or-later & LGPL-3.0-only & LicenceRef-KDE-Accepted-LGPL & Qt-Commercial-exception"


inherit cmake_plasma
inherit ki18n
inherit kcoreaddons
inherit kconfig
inherit kcmutils
inherit kdoctools
inherit reuse_license_checksums

DEPENDS = " \
    kcompletion \
    kcrash \
    kdnssd \
    kglobalaccel \
    kiconthemes \
    kitemmodels \
    kitemviews \
    knewstuff \
    knotifications \
    knotifyconfig \
    kparts \
    ktextwidgets \
    kwidgetsaddons \
    kwindowsystem \
    kxmlgui \
    akonadi \
    akonadi-notes \
    libkdepim \
    kmime \
    pimcommon \
    kpimtextedit \
    grantleetheme \
    akonadi-search \
    kcalutils \
    kontactinterface \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${libdir}/plugins/pim5/kcms/knotes \
    ${datadir}/akonadi/agents \
    ${libdir}/plugins/pim5/kcms/summary/ \
    "
