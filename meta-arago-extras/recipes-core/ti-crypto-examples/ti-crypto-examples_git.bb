DESCRIPTION = "TI Cryptography Example Applications"
HOMEPAGE = "https://git.ti.com/cgit/arago-project-org/crypto-example-apps/"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://AES/aes_256.c;beginline=9;endline=35;md5=8edbb4dee965d2f2eb5ca2822addcae5"
SECTION = "console"
DEPENDS += "openssl"

PR = "r5"

BRANCH ?= "master"
SRCREV = "1c6a493600ce1a830611cc5671639c03cc3ebc01"

SRC_URI = "git://git.ti.com/git/arago-project-org/crypto-example-apps.git;protocol=https;branch=${BRANCH}"

S = "${WORKDIR}/git/"

do_compile() {
    export CROSS_COMPILE=${TARGET_PREFIX}
    export CFLAGS='${TARGET_CC_ARCH}'
    # build the release version
    oe_runmake release
}

do_install() {
    oe_runmake DESTDIR=${D} install
}
