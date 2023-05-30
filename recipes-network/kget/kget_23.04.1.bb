# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/release-service/${PV}/src/kget-${PV}.tar.xz \
           file://0001-Hardcode-GMP-Version-due-to-cross-compile.patch \
           "
SRC_URI[sha256sum] = "781f94e4849357e0fe868235bd32aa5ecd9428d72c50593d8a2d85313ed0b66e"

