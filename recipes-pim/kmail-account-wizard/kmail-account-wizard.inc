# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Application which assists you with the configuration of accounts in KMail"
SUMMARY = "Application which assists you with the configuration of accounts in KMail"
HOMEPAGE = "https://invent.kde.org/pim/kmail-account-wizard"
LICENSE = " BSD-3-Clause & CC0-1.0 & GFDL-1.2-or-later & GPL-2.0-or-later & LGPL-2.0-or-later"


inherit cmake_plasma
inherit kcmutils
inherit kconfig
inherit kdoctools
inherit reuse_license_checksums
inherit mime-xdg
inherit mime


DEPENDS = " \
    kcodecs \
    kcrash \
    kdbusaddons \
    knewstuff \
    knotifications \
    knotifyconfig \
    kross \
    kservice \
    ktexteditor \
    kwallet \
    akonadi \
    akonadi-mime \
    kidentitymanagement \
    kimap \
    kldap \
    kmailtransport \
    libkdepim \
    libkleo \
    pimcommon \
    qtkeychain \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/mime/packages \
    ${datadir}/akonadi/accountwizard/tine20 \
"