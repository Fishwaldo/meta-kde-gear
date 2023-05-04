require ${PN}.inc
SRC_URI = "git://gitlab.com/accounts-sso/libaccounts-qt.git;protocol=https;branch=master \
           file://0001-fix-include-path.patch \
           "
SRCREV = "525ec684cfa8d234f797d7e49e21c476eea04d8e"
