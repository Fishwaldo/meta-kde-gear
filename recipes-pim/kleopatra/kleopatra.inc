# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Certificate manager and GUI for OpenPGP and CMS cryptography"
SUMMARY = "Certificate manager and GUI for OpenPGP and CMS cryptography"
HOMEPAGE = "https://invent.kde.org/pim/kleopatra"
LICENSE = " BSD-3-Clause & CC0-1.0 & GFDL-1.2-or-later & GPL-2.0-only & GPL-2.0-or-later & LGPL-2.0-only & LGPL-2.0-or-later & LGPL-2.1-only & LGPL-2.1-or-later & LGPL-3.0-only"


inherit cmake_plasma
inherit kcmutils
inherit kconfig
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg

DEPENDS = " \
    kcodecs \
    kconfigwidgets \
    kcrash \
    kiconthemes \
    kio \
    kitemmodels \
    kwidgetsaddons \
    kwindowsystem \
    kxmlgui \
    kidentitymanagement \
    kmailtransport \
    kmime \
    libkleo \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/mime/packages \
    ${datadir}/kwatchgnupg/pics \
    ${datadir}/kio/servicemenus \
    ${libdir}/plugins/pim5/kcms/kleopatra/ \
"

