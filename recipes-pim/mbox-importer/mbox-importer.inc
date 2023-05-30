# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Wizard to assist with importing MBox email archives into Akonadi"
SUMMARY = "Wizard to assist with importing MBox email archives into Akonadi"
HOMEPAGE = "https://invent.kde.org/pim/mbox-importer"
LICENSE = " BSD-3-Clause & CC0-1.0 & GPL-2.0-or-later"


inherit cmake_plasma
inherit reuse_license_checksums
inherit mime-xdg



DEPENDS = " \
    akonadi \
    mailcommon \
    mailimporter \
    pimcommon \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

