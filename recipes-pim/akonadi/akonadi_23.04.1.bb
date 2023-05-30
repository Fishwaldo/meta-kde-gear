require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/release-service/${PV}/src/akonadi-${PV}.tar.xz \
           file://0001-use-qemuwrapper-for-protocolgen.patch \
           "
SRC_URI[sha256sum] = "386582462d5721587af6657c6cac25a097b3475ac11afc3d3f79a6df6e780e4e"
