# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Full-featured CD/DVD/Blu-ray burning and ripping application"
SUMMARY = "Full-featured CD/DVD/Blu-ray burning and ripping application"
HOMEPAGE = "https://invent.kde.org/multimedia/k3b"
LICENSE = " GFDL-1.2-or-later & GPL-2.0-or-later & LGPL-2.0-or-later"


inherit cmake_plasma
inherit kcmutils
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg
inherit mime


DEPENDS = " \
    karchive \
    kfilemetadata \
    kiconthemes \
    kio \
    kjobwidgets \
    knewstuff \
    knotifications \
    knotifyconfig \
    kservice \
    kwidgetsaddons \
    kxmlgui \
    solid \
    libkcddb \
    libsamplerate0 \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/solid/actions/ \
    ${datadir}/kservices5/ServiceMenus/ \
    ${datadir}/mime/packages/ \
    ${datadir}/konqsidebartng/virtual_folders/ \
"