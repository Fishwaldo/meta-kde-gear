SUMMARY = "Qt-based client library for the accounts database"
DESCRIPTION = "Qt-based client library for the accounts database"
HOMEPAGE = "https://invent.kde.org/utilities/kdebugsettings"
LICENSE = "LGPL-2.1-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=243b725d71bb5df4a1e5920b344b86ad"

SRC_URI:append = " \
    file://0001-meson-Disable-docs-and-tests.patch \
"

S="${WORKDIR}/git"


inherit pkgconfig 
inherit meson
inherit gobject-introspection
inherit vala

EXTRA_OEMESON = "-Dpy-overrides-dir=/usr/lib/python3.8/dist-packages/gi/overrides/"
GIR_MESON_OPTION = ""

DEPENDS += " \
    glib-2.0 \
    glib-2.0-native \
    vala-native \
    python3-pygobject-native \
    qemu-native \
    libxml2 \
    libxml2-native \
    vala \
"

FILES:${PN} += " \
    ${datadir}/dbus-1/interfaces/ \
    ${datadir}/xml/accounts/schema/dtd/ \
    ${datadir}/gettext/its/ \
    ${libdir}/python3.8/dist-packages/gi/overrides \
"
