# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Job-based library to send email through an SMTP server"
SUMMARY = "Job-based library to send email through an SMTP server "
HOMEPAGE = "https://invent.kde.org/pim/ksmtp"
LICENSE = "BSD-3-Clause & CC0-1.0 & LGPL-2.0-or-later & LGPL-2.1-or-later"

inherit cmake_plasma
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums

DEPENDS = " \
    kio \
    cyrus-sasl \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

