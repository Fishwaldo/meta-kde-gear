# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://github.com/KDAB/KDSoap/releases/download/kdsoap-2.1.1/kdsoap-2.1.1.tar.gz \
           file://0001-dont-export-kdwsdl2cpp.patch \
           "
SRC_URI[sha256sum] = "aed57f6b200ddf762f5d2898f7e9228dd0700881c4491aefe4006f7fa5f5c627"
