SUMMARY = "Xapian is an Open Source Search Engine Library"
HOMEPAGE = "http://xapian.org/"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=4325afd396febcb659c36b49533135d4"

inherit autotools

DEPENDS = " \
    util-linux \
    zlib \
"

