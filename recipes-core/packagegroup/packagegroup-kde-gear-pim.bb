DESCRIPTION = "KDE Gear PIM Packages"

PACKAGE_ARCH = "${TUNE_PKGARCH}"

inherit packagegroup

PACKAGES = " \
    packagegroup-kde-gear-pim \
"
RDEPENDS:packagegroup-kde-gear-pim = " \
    akonadi \
    akonadi-calendar \
    akonadi-calendar-tools \
    akonadi-contacts \
    akonadi-import-wizard \
    akonadi-mime \
    akonadi-notes \
    akonadi-search \
    akonadiconsole \
    kaddressbook \
    kalarm \
    merkuro \
    knotes \
    akregator \
    grantlee-editor \
    itinerary \
    kdepim-addons \
    kleopatra \
    kmail \
    kmail-account-wizard \
    kontact \
    korganizer \
    mbox-importer \
    pim-data-exporter \
    pim-sieve-editor \
    zanshin \
    kdepim-runtime \
"