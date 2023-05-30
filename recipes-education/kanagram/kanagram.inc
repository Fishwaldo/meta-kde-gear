# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Letter Order Game"
SUMMARY = "Letter Order Game"
HOMEPAGE = "https://invent.kde.org/education/kanagram"
LICENSE = "GPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://COPYING;md5=751419260aa954499f7abaabaa882bbe"

inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n


DEPENDS = " \
    libkeduvocdocument \
    kconfigwidgets \
    kcrash \
    kio \
    knewstuff \
    sonnet \
"


