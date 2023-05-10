SUMMARY = "Tool for annotating images "
HOMEPAGE = "https://github.com/ksnip/kImageAnnotator"
LICENSE = "GPL-3.0-only"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3000208d539ec061b899bce1d9ce9404"

inherit cmake_qt5
inherit reuse_license_checksums

S="${WORKDIR}/git"

DEPENDS += " \
    kcolorpicker \
    qtsvg \
    qttools-native \
"

FILES:${PN} += " \
    ${datadir}/kImageAnnotator/translations/ \
"