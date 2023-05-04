require ${PN}.inc
SRC_URI = "git://gitlab.com/accounts-sso/signond.git;protocol=https;branch=master \
           file://0001-Fix-include-path.patch \
           "
SRCREV = "5b34c5bbc45eedf55bf553675595b3fcb5c156a8"