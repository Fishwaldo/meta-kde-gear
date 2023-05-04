#!/bin/bash
#
# add/remove KDE Gear release recipes
#
# SPDX-FileCopyrightText: 2019 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

function usage()
{
    echo "$1 [add-tarball|remove|update] <app> <version>"
    exit 1
}

command=$1
if [ -z "$command" ]; then usage $0; fi

app=$2
if [ -z "$app" ]; then usage $0; fi

version=$3
if [ -z "$version" ]; then usage $0; fi

base=`dirname $0`/../recipes-application

case $command in
add-tarball)
    name="${base}/${app}"
    url="https://download.kde.org/stable/release-service/${version}/src/${app}-${version}.tar.xz"
    sha256=$(curl -s "${url}.sha256" | cut -d" " -f1)
    echo "${url} : ${sha256}"
    mkdir -p ${name}
    cat <<EOM > "${name}/${app}_${version}.bb"
require \${PN}.inc
SRC_URI = "${url}"
SRC_URI[sha256sum] = "${sha256}"
EOM
    cat <<EOM > "${name}/${app}.inc"
SUMMARY = "${app}"
DESCRIPTION = "TODO"
HOMEPAGE = "https://invent.kde.org/${app}/"
LICENSE = "MIT & BSD-2-Clause & BSD-3-Clause & LGPL-2.0+ & (LGPL-2.1 | LGPL-3.0 | LicenseRef-KDE-Accepted-LGPL)"

KF5_REUSE_LICENSECHECK_ENABLED="1"

inherit cmake_kdeapp
inherit mime-xdg
EOM
    #git add $name
    ;;    
*)
    usage $0
    ;;
esac
