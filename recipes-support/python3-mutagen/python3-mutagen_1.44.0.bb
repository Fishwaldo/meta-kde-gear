LICENSE = "GPLv3"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"

inherit pypi setuptools3

SRC_URI[sha256sum] = "56065d8a9ca0bc64610a4d0f37e2bd4453381dde3226b8835ee656faa3287be4"

PYPI_PACKAGE = "mutagen"

BBCLASSEXTEND="native nativesdk"