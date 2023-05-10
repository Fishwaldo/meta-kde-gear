SUMMARY = "Various text handling addons"
HOMEPAGE = "https://invent.kde.org/libraries/ktextaddons"
LICENSE = "LGPL-2.1-only"

inherit cmake_kf5
inherit ki18n
inherit kcoreaddons
inherit kauth 
inherit kconfig 
inherit reuse_license_checksums

DEPENDS += " \
    kconfigwidgets \
    karchive \
    kxmlgui \
    qtkeychain \
"

FILES:${PN} += " \
    ${libdir}/plugins/kf5/translator/ \
"
