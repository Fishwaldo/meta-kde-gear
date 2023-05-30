# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Flexible multi-protocol instant messenger for personal and enterprise use"
SUMMARY = "Flexible multi-protocol instant messenger for personal and enterprise use"
HOMEPAGE = "https://invent.kde.org/network/kopete"
LICENSE = "GPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://COPYING;md5=1f1ed80c472226fa2384a6c673802806"

inherit cmake_plasma
inherit kcmutils
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit mime-xdg


DEPENDS = " \
    kcontacts \
    kcrash \
    kdbusaddons \
    kdelibs4support \
    kdnssd \
    kemoticons \
    khtml \
    knotifyconfig \
    kparts \
    ktexteditor \
    kwallet \
    phonon \
    kidentitymanagement \
    kleopatra \
    libidn \
    jsoncpp \
    libkleo \
    libsrtp \
    speex \
"

RDEPENDS:${PN} += " \
    bash \
    perl \
"

FILES:${PN} += " \
    ${datadir}/kopete_history \
    ${datadir}/icons/oxygen \
    ${datadir}/kservices5/kconfiguredialog \
    ${libdir}/libqgroupwise.so \
"

FILES:${PN}-dev = " \
    ${includedir}/kopete \
    ${libdir}/libkopete_videodevice.so \
    ${libdir}/libkopete.so \
    ${libdir}/libkopeteaddaccountwizard.so \
    ${libdir}/libkopetestatusmenu.so \
    ${libdir}/libkopeteidentity.so \
    ${libdir}/libkopetecontactlist.so \
    ${libdir}/libkopetechatwindow_shared.so \
    ${libdir}/liboscar.so \
    ${libdir}/libkopete_oscar.so \
    ${libdir}/libkopeteprivacy.so \
"