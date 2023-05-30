# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Translate DocBook XML files using gettext PO files"
SUMMARY = "Translate DocBook XML files using gettext PO files"
HOMEPAGE = "https://invent.kde.org/sdk/poxml"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=5a3169a2d39a757efd8b7aa66a69d97b"


inherit cmake_plasma
inherit kdoctools


DEPENDS = " \
    gettext \
"


