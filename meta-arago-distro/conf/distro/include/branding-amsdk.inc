# AM-SDK branding configuration

# Use the SDK supported kernel and kernel version
PREFERRED_PROVIDER_virtual/kernel_am335x-evm = "linux-am335x-psp"
PREFERRED_VERSION_linux-am335x-psp = "3.2"
PREFERRED_VERSION_linux-libc-headers_am335x-evm = "3.2"

PREFERRED_PROVIDER_ltp-ddt_am335x-evm = "ltp-ddt-legacy"
PREFERRED_PROVIDER_virtual/bootloader_am335x-evm = "u-boot-am33x"
PREFERRED_PROVIDER_u-boot_am335x-evm = "u-boot-am33x"
PREFERRED_VERSION_u-boot-am33x = "2013.01.01"

# Use v4.09.00.01 of the Graphics SDK
PREFERRED_VERSION_omap3-sgx-modules = "4.09.00.01"
PREFERRED_VERSION_libgles-omap3 = "4.09.00.01"
