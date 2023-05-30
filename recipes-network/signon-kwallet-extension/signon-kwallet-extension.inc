# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KWallet integration for the SignOn framework (gitlab.com/accounts-sso)"
SUMMARY = "KWallet integration for the SignOn framework (gitlab.com/accounts-sso)"
HOMEPAGE = "https://invent.kde.org/network/signon-kwallet-extension"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=5c213a7de3f013310bd272cdb6eb7a24"


inherit cmake_plasma


DEPENDS = " \
    kwallet \
    libsignon-qt \
"

FILES:${PN} += " \
    ${libdir}/signon/extensions/ \
"
