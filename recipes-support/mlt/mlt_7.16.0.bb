SUMMARY = "MLT Multimedia Framework"
HOMEPAGE = "http://www.mltframework.org"
LICENSE = "GPL-2.0-only & LGPL-2.1-only"
LIC_FILES_CHKSUM = " \
    file://COPYING;md5=4b54a1fd55a448865a0b32d41598759d \
    file://GPL;md5=b234ee4d69f5fce4486a80fdaf4a4263 \
    file://GPLv3;md5=d32239bcb673463ab874e80d47fae504 \
"

SRC_URI = "git://github.com/mltframework/mlt.git;branch=master;protocol=https"
SRCREV = "72fc3ef70c0bbaf6d548b1fd10f99ff7aa90f803"
S = "${WORKDIR}/git"

inherit cmake_qt5 pkgconfig

DEPENDS += " \
    gtk+ \
    qtbase \
    qtsvg \
    virtual/libx11 \
    pango \
    sox \
    libav \
    libsdl libsdl-image \
    libsdl2 libsdl2-image \
    libexif \
    libsamplerate0 \
    fftw \
    ladspa \
    rubberband \
    frei0r \
"

FILES:${PN} += " \
    ${datadir}/mlt-7 \
    ${libdir}/mlt-7 \
"