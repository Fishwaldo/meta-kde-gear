FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:"

SRC_URI += "file://0001-fix-paths.patch"

LANGUAGES:append = " qt"
DEPENDS:append = " \
    qtbase \
    qtbase-native \
"