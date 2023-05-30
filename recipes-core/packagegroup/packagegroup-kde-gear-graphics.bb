DESCRIPTION = "KDE Gear Graphical Packages"

PACKAGE_ARCH = "${TUNE_PKGARCH}"

inherit packagegroup

PACKAGES = " \
    packagegroup-kde-gear-graphics \
"
RDEPENDS:packagegroup-kde-gear-graphics = " \
    gwenview \
    okular \
    colord-kde \
    kamera \
    kcolorchooser \
    kdegraphics-thumbnailers \
    kimagemapeditor \
    kipi-plugins \
    koko \
    kolourpaint \
    libksane \
    kruler \
    skanlite \
    spectacle \
    svgpart \
"