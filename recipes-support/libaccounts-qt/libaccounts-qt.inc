SUMMARY = "Qt-based client library for the accounts database"
DESCRIPTION = "Qt-based client library for the accounts database"
HOMEPAGE = "https://invent.kde.org/utilities/kdebugsettings"
LICENSE = "LGPL-2.1-Only"
LIC_FILES_CHKSUM = "file://COPYING;md5=243b725d71bb5df4a1e5920b344b86ad"

S="${WORKDIR}/git"

inherit pkgconfig qmake5

do_configure:prepend() {
    sed -i "/doc.pri/d" ${S}/accounts-qt.pro
}

do_install:append() {
    rm -r ${D}/usr/bin/
}

DEPENDS = " \
    qtbase \
    libaccounts-glib \
"

