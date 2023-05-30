DESCRIPTION = "KDE Gear Network Packages"

PACKAGE_ARCH = "${TUNE_PKGARCH}"

inherit packagegroup

PACKAGES = " \
    packagegroup-kde-gear-network \
"
RDEPENDS:packagegroup-kde-gear-network = " \
    kaccounts-integration \
    kaccounts-providers \
    alligator \
    falkon \
    kdenetwork-filesharing \
    kget \
    kio-extras \
    kio-gdrive \
    kio-zeroconf \
    konversation \
    kopete \
    krdc \
    krfb \
    ktorrent \
    neochat \
    signon-kwallet-extension \
    tokodon \
    kdeconnect-kde \
"