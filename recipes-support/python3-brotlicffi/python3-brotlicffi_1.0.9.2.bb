LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=ae57d8a09fc8b6b164d7357339619045"

inherit pypi setuptools3

SRC_URI[sha256sum] = "0c248a68129d8fc6a217767406c731e498c3e19a7be05ea0a90c3c86637b7d96"

PYPI_PACKAGE = "brotlicffi"

DEPENDS += " \
    python3-brotli \
    python3-pip-native \
    python3-cffi \
    python3-cffi-native \
"
BBCLASSEXTEND="native nativesdk"