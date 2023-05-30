# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KPart for rendering Markdown content"
SUMMARY = "KPart for rendering Markdown content"
HOMEPAGE = "https://invent.kde.org/utilities/markdownpart"
LICENSE = " LGPL-2.1-or-later"


inherit cmake_plasma
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kparts \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

