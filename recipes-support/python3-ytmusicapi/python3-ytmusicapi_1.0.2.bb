SUMMARY = "Unofficial API for YouTube Music "
HOMEPAGE = "https://github.com/sigma67/ytmusicapi"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=b2983e612518f1c2e8ea55d1bb3bd47f"

SRC_URI += "file://0001-add-setup-files.patch"
SRC_URI[sha256sum] = "f798bfedd49738bece82aac15b2d97f04578ccb1572f347a350cb704df4d0e10"

PYPI_PACKAGE = "ytmusicapi"

inherit pypi setuptools3

DEPENDS += " \
    python3-requests \
"

BBCLASSEXTEND="native nativesdk"