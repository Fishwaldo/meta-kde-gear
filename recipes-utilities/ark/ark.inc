# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "File archiver by KDE"
SUMMARY = "Ark is a graphical file compression/decompression utility with support for multiple formats."
HOMEPAGE = "https://invent.kde.org/utilities/ark"
LICENSE = " BSD-2-Clause & CC0-1.0 & GPL-2.0-or-later & LGPL-3.0-only & MIT"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg 


DEPENDS = " \
    karchive \
    kcrash \
    kdbusaddons \
    kiconthemes \
    kio \
    kitemmodels \
    kparts \
    kpty \
    kservice \
    kwidgetsaddons \
    libarchive \
    libzip \
"

RDEPENDS:${PN} = " \
    lzop \
    7z \
    zip \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

