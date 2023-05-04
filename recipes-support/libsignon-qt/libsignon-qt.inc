SUMMARY = "Single Sign On framework"
HOMEPAGE = "https://gitlab.com/accounts-sso/signond"
LICENSE = "LGPL-2.1-or-later"
LIC_FILES_CHKSUM = "file://COPYING;md5=243b725d71bb5df4a1e5920b344b86ad"

S = "${WORKDIR}/git"
inherit qmake5

DEPENDS += " \
    qtbase \
"

do_configure:prepend() {
    sed -i "/doc.pri/d" ${S}/signon.pro ${S}/lib/SignOn/SignOn.pro ${S}/lib/plugins/plugins.pro
}

do_install:append() {
    if [ -d "${D}/usr/lib64/" ]; then
        mv ${D}/usr/lib64/ ${D}/usr/lib/
    fi
}

FILES:${PN} += " \
    /usr/share/dbus-1/ \
    /usr/lib/signon/ \
" 
