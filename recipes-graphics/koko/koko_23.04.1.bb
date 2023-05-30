# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = " \
    https://download.kde.org/stable/release-service/${PV}/src/koko-${PV}.tar.xz \
    file://admin1CodesASCII.txt \
    file://admin2Codes.txt \
    file://cities1000.zip.txt \
"
SRC_URI[sha256sum] = "f7a5a9504add173e03a8395e4876218c00bb594d73f381dab8ec03b10acfb06d"

