# Set preferred Qt5 versions. Different namespace from Qt4, so no conflict
include conf/distro/include/qt5-versions.inc

# Use the latest version of ltp-ddt for kernel versions 3.8+
PREFERRED_PROVIDER_ltp-ddt = "ltp-ddt"

PREFERRED_PROVIDER_virtual/gettext = "gettext"

ARAGO_QT_PROVIDER = "${@base_contains('MACHINE_FEATURES','sgx','qt4-embedded-gles','qt4-embedded',d)}"
PREFERRED_PROVIDER_qt4-embedded = "${ARAGO_QT_PROVIDER}"

PREFERRED_VERSION_qt4-embedded = "4.8.4"
PREFERRED_VERSION_qt4-native = "4.8.4"
PREFERRED_VERSION_nativesdk-qt4-tools = "4.8.4"
PREFERRED_VERSION_linux-libc-headers = "3.8"

# Use v4.09.00.01 of the Graphics SDK
PREFERRED_VERSION_omap3-sgx-modules = "4.09.00.01"
PREFERRED_VERSION_libgles-omap3 = "4.09.00.01"

# Use v5.00.00.01 of the Graphics SDK
PREFERRED_VERSION_omap3-sgx-modules_ti33x = "5.00.00.01"
PREFERRED_VERSION_omap3-sgx-modules_ti43x = "5.00.00.01"
PREFERRED_VERSION_libgles-omap3_ti43x = "5.00.00.01"
PREFERRED_VERSION_libgles-omap3_ti33x = "5.00.00.01"

PREFERRED_PROVIDER_omap3-sgx-modules = "omap3-sgx-modules"
PREFERRED_PROVIDER_libgles-omap3 = "libgles-omap3"
PREFERRED_PROVIDER_libgles-omap3-dev = "libgles-omap3-dev"
PREFERRED_PROVIDER_libgles-omap3-dbg = "libgles-omap3-dbg"
PREFERRED_PROVIDER_virtual/egl = "libgles-omap3"
PREFERRED_PROVIDER_virtual/libgles1 = "libgles-omap3"
PREFERRED_PROVIDER_virtual/libgles2 = "libgles-omap3"

# Use latest TI staging kernel and u-boot trees
PREFERRED_VERSION_linux-libc-headers_am335x-evm = "3.8"
PREFERRED_PROVIDER_virtual/kernel_am335x-evm = "linux-ti-staging"
PREFERRED_PROVIDER_virtual/bootloader_am335x-evm = "u-boot-ti-staging"
PREFERRED_PROVIDER_u-boot_am335x-evm = "u-boot-ti-staging"

PREFERRED_VERSION_linux-libc-headers_am437x-evm = "3.8"
PREFERRED_PROVIDER_virtual/kernel_am437x-evm = "linux-ti-staging"
PREFERRED_PROVIDER_virtual/bootloader_am437x-evm = "u-boot-ti-staging"
PREFERRED_PROVIDER_u-boot_am437x-evm = "u-boot-ti-staging"

PREFERRED_VERSION_linux-libc-headers_am180x-evm = "2.6.37.2"
PREFERRED_PROVIDER_virtual/kernel_am180x-evm = "linux-omapl138-psp"
PREFERRED_VERSION_linux-omapl138-psp = "2.6.37"
PREFERRED_PROVIDER_ltp-ddt_am180x-evm = "ltp-ddt-legacy"
PREFERRED_PROVIDER_virtual/bootloader_am180x-evm = "u-boot-am180x"
PREFERRED_PROVIDER_u-boot_am180x-evm = "u-boot-am180x"
PREFERRED_VERSION_u-boot-am180x = "2010.12"

PREFERRED_VERSION_linux-libc-headers_am37x-evm = "2.6.37.2"
PREFERRED_PROVIDER_virtual/kernel_am37x-evm = "linux-omap-psp"
PREFERRED_VERSION_linux-omap-psp = "2.6.37"
PREFERRED_PROVIDER_ltp-ddt_am37x-evm = "ltp-ddt-legacy"
PREFERRED_PROVIDER_virtual/bootloader_am37x-evm = "u-boot-am37x"
PREFERRED_PROVIDER_u-boot_am37x-evm = "u-boot-am37x"
PREFERRED_VERSION_u-boot-am37x_am37x-evm = "2012.04.01"

PREFERRED_VERSION_linux-libc-headers_am3517-evm = "2.6.37.2"
PREFERRED_PROVIDER_virtual/kernel_am3517-evm = "linux-omap-psp"
PREFERRED_VERSION_linux-omap-psp_am3517-evm = "2.6.37"
PREFERRED_PROVIDER_ltp-ddt_am3517-evm = "ltp-ddt-legacy"
PREFERRED_PROVIDER_virtual/bootloader_am3517-evm = "u-boot-am3517"
PREFERRED_PROVIDER_u-boot_am3517-evm = "u-boot-am3517"

PREFERRED_PROVIDER_virtual/kernel_beagleboard = "linux"
PREFERRED_VERSION_linux_beagleboard = "3.3.7"
PREFERRED_PROVIDER_ltp-ddt_beagleboard = "ltp-ddt-legacy"
PREFERRED_VERSION_linux-libc-headers_beagleboard = "3.2"
PREFERRED_PROVIDER_virtual/bootloader_beagleboard = "u-boot-am37x"
PREFERRED_PROVIDER_u-boot_beagleboard = "u-boot-am37x"
PREFERRED_VERSION_u-boot-am37x_beagleboard = "2012.04.01"

# Pin down udev version from oe-core, as meta-oe pulls in newer systemd-enhanced version
PREFERRED_VERSION_udev = "182"
PREFERRED_PROVIDER_udev = "udev"

# Set the PREFERRED_PROVIDER for jpeg functionality based on the MACHINE
# architecture.  For armv7a devices libjpeg-turbo should be used to take
# advantage of the SIMD instructions.
PREFERRED_PROVIDER_jpeg = "libjpeg-turbo"
PREFERRED_PROVIDER_jpeg_armv5te = "jpeg"

# Setting PREFERRED_VERSIONS due to selecting a specific version of a library or
# application that does not have a GPLv3 license
PREFERRED_VERSION_gdbm = "1.8.3"
PREFERRED_VERSION_readline = "5.2"
PREFERRED_VERSION_readline-native = "5.2"
PREFERRED_VERSION_readline-nativesdk = "5.2"

PREFERRED_VERSION_libnl = "3.2.21"
PREFERRED_VERSION_crda = "1.1.3"
PREFERRED_VERSION_obex = "0.34"
PREFERRED_VERSION_bluez4 = "4.101"
PREFERRED_VERSION_bluez-hcidump = "2.2"
PREFERRED_VERSION_bash = "3.2.48"
PREFERRED_VERSION_gettext = "0.16.1"

WILINK_VERSION = "WILINK-8"
# For AM335x & AM43x Wilink 8 is now the default version to be used
WILINK_VERSION_ti33x = "WILINK-8"
WILINK_VERSION_ti43x = "WILINK-8"
PREFERRED_PROVIDER_wl12xx-firmware = "${@base_contains('WILINK_VERSION','WILINK-8','wl18xx-firmware','wl12xx-firmware',d)}"
PREFERRED_PROVIDER_ti-compat-wireless-wl12xx = "${@base_contains('WILINK_VERSION','WILINK-8','ti-compat-wireless-wl18xx','ti-compat-wireless-wl12xx',d)}"
PREFERRED_PROVIDER_hostap-daemon = "${@base_contains('WILINK_VERSION','WILINK-8','hostap-daemon-wl18xx','hostap-daemon',d)}"
PREFERRED_PROVIDER_wpa-supplicant = "${@base_contains('WILINK_VERSION','WILINK-8','wpa-supplicant-wl18xx','wpa-supplicant',d)}"
PREFERRED_PROVIDER_ti-wifi-utils = "${@base_contains('WILINK_VERSION','WILINK-8','ti-wifi-utils-wl18xx','ti-wifi-utils',d)}"

# Support Wilink 6 PG 2 modules
# By default am180x-evm comes with an outdated wilink 6 module
# All other platforms build the latest Wilink 6 PG 3 modules
PREFERRED_VERSION_ti-compat-bluetooth_am180x-evm = "r5.00.18"
PREFERRED_VERSION_ti-compat-wireless-wl12xx_am180x-evm = "r5.00.18"
PREFERRED_VERSION_wl12xx-firmware_am180x-evm = "r5.00.18"
PREFERRED_VERSION_wpa-supplicant_am180x-evm = "r5.00.18"
PREFERRED_VERSION_hostap-daemon_am180x-evm = "r5.00.18"
PREFERRED_VERSION_ti-wifi-utils_am180x-evm = "r5.00.18"
