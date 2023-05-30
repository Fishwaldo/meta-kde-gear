SUMMARY = "ZXing-C++ ("zebra crossing") is an open-source, multi-format linear/matrix barcode image processing library implemented in C++."
HOMEPAGE = "https://github.com/zxing-cpp/zxing-cpp"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=fa818a259cbed7ce8bc2a22d35a464fc"

inherit cmake
inherit pkgconfig

S="${WORKDIR}/git"

DEPENDS = " \
"

EXTRA_OECMAKE += "-DBUILD_EXAMPLES=OFF"
