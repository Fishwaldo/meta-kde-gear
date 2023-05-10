# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Libraries and daemons to implement Contact Management in Akonadi"
SUMMARY = "Libraries and daemons to implement Contact Management in Akonadi"
HOMEPAGE = "https://invent.kde.org/pim/akonadi-contacts"
LICENSE = "BSD-3-Clause & CC0-1.0 & GPL-2.0-or-later & LGPL-2.0-or-later"

inherit cmake_plasma
inherit kcmutils 
inherit kcoreaddons
inherit ki18n
inherit kconfig
inherit kdoctools 
inherit reuse_license_checksums
inherit mime-xdg

DEPENDS = " \
    kio \
    kcompletion \
    kiconthemes \
    kservice \
    ktextwidgets \ 
    kwidgetsaddons \
    kxmlgui \ 
    prison \
    kcodecs \
    kcontacts \
    kmime \
    akonadi \
    grantleetheme \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/akonadi/plugins/serializer \
    ${datadir}/kf5/akonadi/contact \
    ${libdir}/plugins/pim5/kcms/kaddressbook \
    ${libdir}/plugins/pim5/akonadi/contacts/plugins \
"