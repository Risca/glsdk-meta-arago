DESCRIPTION = "Package that contains a script to setup oe-core development environment"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COREBASE}/meta/COPYING.MIT;md5=3da9cfbcb788c80a0384361b4de20420"

PR = "r0"

PACKAGE_ARCH = "all"

BRANCH ?= "master"
SRCREV = "e58f941784fb45fd826779a45b33973e6342700f"
SRC_URI = "git://git.ti.com/git/arago-project/oe-layersetup.git;protocol=https;branch=${BRANCH}"

S = "${WORKDIR}/git/"
