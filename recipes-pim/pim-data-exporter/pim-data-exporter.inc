# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Application to assist you with backing up and archiving of PIM data"
SUMMARY = "Application to assist you with backing up and archiving of PIM data"
HOMEPAGE = "https://invent.kde.org/pim/pim-data-exporter"
LICENSE = " BSD-3-Clause & CC0-1.0 & GFDL-1.2-or-later & GPL-2.0-or-later & LGPL-2.0-or-later"


inherit cmake_plasma
inherit reuse_license_checksums


DEPENDS = " \
    kcalendarcore \
    kcontacts \
    akonadi \
    akonadi-notes \
    kidentitymanagement \
    kmailtransport \
    kmime \
    kpimtextedit \
    mailcommon \
    pimcommon \
    kuserfeedback \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

