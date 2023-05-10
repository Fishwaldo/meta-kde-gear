SUMMARY = "A youtube-dl fork with additional features and fixes "
HOMEPAGE = "https://github.com/yt-dlp/yt-dlp"
LICENSE = "Unlicense"
LIC_FILES_CHKSUM = "file://LICENSE;md5=7246f848faa4e9c9fc0ea91122d6e680"

SRC_URI[sha256sum] = "265d5da97a76c15d7d9a4088a67b78acd5dcf6f8cfd8257c52f581ff996ff515"

PYPI_PACKAGE = "yt-dlp"

inherit pypi setuptools3

DEPENDS += " \
    python3-mutagen \
    python3-pycryptodomex \
    python3-websockets \
    python3-brotli \
    python3-certifi \
    python3-brotlicffi \
"

FILES:${PN} += " \
    ${datadir}/bash-completion/completions/ \
    ${datadir}/fish/vendor_completions.d \
    ${datadir}/zsh/site-functions \
"

BBCLASSEXTEND="native nativesdk"
