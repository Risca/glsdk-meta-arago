DESCRIPTION = "Extended task to get System Test specific apps"
LICENSE = "MIT"
PR = "r12"

inherit packagegroup

PACKAGE_ARCH = "${MACHINE_ARCH}"

ARAGO_TEST = "\
    bonnie++ \
    hdparm \
    iozone3 \
    iperf \
    lmbench \
    rt-tests \
    evtest \
    bc \
    memtester \
    "

ARAGO_TI_TEST = "\
    ltp-ddt \
    input-utils \
    linaro-pm-qa-utils \
    cpuloadgen \
    "

ARAGO_TI_TEST_append_omap-a15 = " \
    omapconf \
    libdrm-tests \
    "

ARAGO_TI_TEST_append_dra7xx-evm = " \
    vpe-vpdma \
    "

RDEPENDS_${PN} = "\
    ${ARAGO_TEST} \
    ${ARAGO_TI_TEST} \
    "
