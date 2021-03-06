/*
 * Automatically generated C config: don't edit
 * Linux kernel version: 2.6.12
 * Sat Jun 18 16:11:57 2005
 */
#define AUTOCONF_INCLUDED
#define CONFIG_PARISC 1
#define CONFIG_MMU 1
#define CONFIG_STACK_GROWSUP 1
#define CONFIG_RWSEM_GENERIC_SPINLOCK 1
#define CONFIG_GENERIC_CALIBRATE_DELAY 1
#define CONFIG_GENERIC_HARDIRQS 1
#define CONFIG_GENERIC_IRQ_PROBE 1
#define CONFIG_ISA_DMA_API 1

/*
 * Code maturity level options
 */
#define CONFIG_EXPERIMENTAL 1
#define CONFIG_CLEAN_COMPILE 1
#define CONFIG_BROKEN_ON_SMP 1
#define CONFIG_INIT_ENV_ARG_LIMIT 32

/*
 * General setup
 */
#define CONFIG_LOCALVERSION ""
#define CONFIG_SWAP 1
#define CONFIG_SYSVIPC 1
#undef CONFIG_POSIX_MQUEUE
#undef CONFIG_BSD_PROCESS_ACCT
#define CONFIG_SYSCTL 1
#undef CONFIG_AUDIT
#undef CONFIG_HOTPLUG
#define CONFIG_KOBJECT_UEVENT 1
#define CONFIG_IKCONFIG 1
#define CONFIG_IKCONFIG_PROC 1
#undef CONFIG_EMBEDDED
#define CONFIG_KALLSYMS 1
#undef CONFIG_KALLSYMS_ALL
#undef CONFIG_KALLSYMS_EXTRA_PASS
#define CONFIG_PRINTK 1
#define CONFIG_BUG 1
#define CONFIG_BASE_FULL 1
#define CONFIG_FUTEX 1
#define CONFIG_EPOLL 1
#define CONFIG_SHMEM 1
#define CONFIG_CC_ALIGN_FUNCTIONS 0
#define CONFIG_CC_ALIGN_LABELS 0
#define CONFIG_CC_ALIGN_LOOPS 0
#define CONFIG_CC_ALIGN_JUMPS 0
#undef CONFIG_TINY_SHMEM
#define CONFIG_BASE_SMALL 0

/*
 * Loadable module support
 */
#undef CONFIG_MODULES

/*
 * Processor type and features
 */
#define CONFIG_PA7000 1
#undef CONFIG_PA7100LC
#undef CONFIG_PA7200
#undef CONFIG_PA7300LC
#undef CONFIG_PA8X00
#define CONFIG_PA11 1
#undef CONFIG_SMP
#undef CONFIG_DISCONTIGMEM
#undef CONFIG_PREEMPT
#undef CONFIG_HPUX

/*
 * Bus options (PCI, PCMCIA, EISA, GSC, ISA)
 */
#define CONFIG_GSC 1
#define CONFIG_HPPB 1
#define CONFIG_IOMMU_CCIO 1
#define CONFIG_GSC_LASI 1
#define CONFIG_GSC_WAX 1
#define CONFIG_EISA 1
#define CONFIG_EISA_NAMES 1
#undef CONFIG_ISA
#define CONFIG_PCI 1
#define CONFIG_PCI_LEGACY_PROC 1
#define CONFIG_PCI_NAMES 1
#undef CONFIG_PCI_DEBUG
#define CONFIG_GSC_DINO 1
#define CONFIG_PCI_LBA 1
#define CONFIG_IOSAPIC 1
#define CONFIG_IOMMU_SBA 1

/*
 * PCCARD (PCMCIA/CardBus) support
 */
#undef CONFIG_PCCARD

/*
 * PCI Hotplug Support
 */
#undef CONFIG_HOTPLUG_PCI

/*
 * PA-RISC specific drivers
 */
#define CONFIG_SUPERIO 1
#define CONFIG_CHASSIS_LCD_LED 1
#define CONFIG_PDC_CHASSIS 1
#define CONFIG_PDC_STABLE 1

/*
 * Executable file formats
 */
#define CONFIG_BINFMT_ELF 1
#undef CONFIG_BINFMT_MISC

/*
 * Device Drivers
 */

/*
 * Generic Driver Options
 */
#define CONFIG_STANDALONE 1
#define CONFIG_PREVENT_FIRMWARE_BUILD 1
#undef CONFIG_FW_LOADER
#undef CONFIG_DEBUG_DRIVER

/*
 * Memory Technology Devices (MTD)
 */
#undef CONFIG_MTD

/*
 * Parallel port support
 */
#define CONFIG_PARPORT 1
#define CONFIG_PARPORT_PC 1
#undef CONFIG_PARPORT_SERIAL
#undef CONFIG_PARPORT_PC_FIFO
#undef CONFIG_PARPORT_PC_SUPERIO
#define CONFIG_PARPORT_GSC 1
#undef CONFIG_PARPORT_1284

/*
 * Plug and Play support
 */

/*
 * Block devices
 */
#undef CONFIG_BLK_DEV_FD
#undef CONFIG_PARIDE
#undef CONFIG_BLK_CPQ_DA
#undef CONFIG_BLK_CPQ_CISS_DA
#undef CONFIG_BLK_DEV_DAC960
#undef CONFIG_BLK_DEV_UMEM
#undef CONFIG_BLK_DEV_COW_COMMON
#define CONFIG_BLK_DEV_LOOP 1
#define CONFIG_BLK_DEV_CRYPTOLOOP 1
#undef CONFIG_BLK_DEV_NBD
#undef CONFIG_BLK_DEV_SX8
#undef CONFIG_BLK_DEV_UB
#define CONFIG_BLK_DEV_RAM 1
#define CONFIG_BLK_DEV_RAM_COUNT 16
#define CONFIG_BLK_DEV_RAM_SIZE 4096
#define CONFIG_BLK_DEV_INITRD 1
#define CONFIG_INITRAMFS_SOURCE ""
#undef CONFIG_CDROM_PKTCDVD

/*
 * IO Schedulers
 */
#define CONFIG_IOSCHED_NOOP 1
#define CONFIG_IOSCHED_AS 1
#define CONFIG_IOSCHED_DEADLINE 1
#define CONFIG_IOSCHED_CFQ 1
#undef CONFIG_ATA_OVER_ETH

/*
 * ATA/ATAPI/MFM/RLL support
 */
#undef CONFIG_IDE

/*
 * SCSI device support
 */
#define CONFIG_SCSI 1
#define CONFIG_SCSI_PROC_FS 1

/*
 * SCSI support type (disk, tape, CD-ROM)
 */
#define CONFIG_BLK_DEV_SD 1
#define CONFIG_CHR_DEV_ST 1
#undef CONFIG_CHR_DEV_OSST
#define CONFIG_BLK_DEV_SR 1
#undef CONFIG_BLK_DEV_SR_VENDOR
#define CONFIG_CHR_DEV_SG 1

/*
 * Some SCSI devices (e.g. CD jukebox) support multiple LUNs
 */
#undef CONFIG_SCSI_MULTI_LUN
#undef CONFIG_SCSI_CONSTANTS
#undef CONFIG_SCSI_LOGGING

/*
 * SCSI Transport Attributes
 */
#define CONFIG_SCSI_SPI_ATTRS 1
#undef CONFIG_SCSI_FC_ATTRS
#undef CONFIG_SCSI_ISCSI_ATTRS

/*
 * SCSI low-level drivers
 */
#undef CONFIG_BLK_DEV_3W_XXXX_RAID
#undef CONFIG_SCSI_3W_9XXX
#undef CONFIG_SCSI_ACARD
#undef CONFIG_SCSI_AHA1740
#undef CONFIG_SCSI_AACRAID
#undef CONFIG_SCSI_AIC7XXX
#undef CONFIG_SCSI_AIC7XXX_OLD
#undef CONFIG_SCSI_AIC79XX
#undef CONFIG_SCSI_DPT_I2O
#undef CONFIG_MEGARAID_NEWGEN
#undef CONFIG_MEGARAID_LEGACY
#undef CONFIG_SCSI_SATA
#undef CONFIG_SCSI_BUSLOGIC
#undef CONFIG_SCSI_DMX3191D
#undef CONFIG_SCSI_EATA
#undef CONFIG_SCSI_FUTURE_DOMAIN
#undef CONFIG_SCSI_GDTH
#undef CONFIG_SCSI_IPS
#undef CONFIG_SCSI_INITIO
#undef CONFIG_SCSI_INIA100
#undef CONFIG_SCSI_PPA
#undef CONFIG_SCSI_IMM
#define CONFIG_SCSI_LASI700 1
#define CONFIG_53C700_LE_ON_BE 1
#define CONFIG_SCSI_SYM53C8XX_2 1
#define CONFIG_SCSI_SYM53C8XX_DMA_ADDRESSING_MODE 1
#define CONFIG_SCSI_SYM53C8XX_DEFAULT_TAGS 16
#define CONFIG_SCSI_SYM53C8XX_MAX_TAGS 64
#undef CONFIG_SCSI_SYM53C8XX_IOMAPPED
#undef CONFIG_SCSI_IPR
#define CONFIG_SCSI_ZALON 1
#define CONFIG_SCSI_NCR53C8XX_DEFAULT_TAGS 8
#define CONFIG_SCSI_NCR53C8XX_MAX_TAGS 32
#define CONFIG_SCSI_NCR53C8XX_SYNC 20
#undef CONFIG_SCSI_NCR53C8XX_PROFILE
#undef CONFIG_SCSI_QLOGIC_FC
#undef CONFIG_SCSI_QLOGIC_1280
#define CONFIG_SCSI_QLA2XXX 1
#undef CONFIG_SCSI_QLA21XX
#undef CONFIG_SCSI_QLA22XX
#undef CONFIG_SCSI_QLA2300
#undef CONFIG_SCSI_QLA2322
#undef CONFIG_SCSI_QLA6312
#undef CONFIG_SCSI_LPFC
#undef CONFIG_SCSI_SIM710
#undef CONFIG_SCSI_DC395x
#undef CONFIG_SCSI_DC390T
#undef CONFIG_SCSI_NSP32
#undef CONFIG_SCSI_DEBUG

/*
 * Multi-device support (RAID and LVM)
 */
#define CONFIG_MD 1
#define CONFIG_BLK_DEV_MD 1
#define CONFIG_MD_LINEAR 1
#define CONFIG_MD_RAID0 1
#define CONFIG_MD_RAID1 1
#undef CONFIG_MD_RAID10
#define CONFIG_MD_RAID5 1
#undef CONFIG_MD_RAID6
#undef CONFIG_MD_MULTIPATH
#undef CONFIG_MD_FAULTY
#undef CONFIG_BLK_DEV_DM

/*
 * Fusion MPT device support
 */
#undef CONFIG_FUSION

/*
 * IEEE 1394 (FireWire) support
 */
#undef CONFIG_IEEE1394

/*
 * I2O device support
 */
#undef CONFIG_I2O

/*
 * Networking support
 */
#define CONFIG_NET 1

/*
 * Networking options
 */
#define CONFIG_PACKET 1
#define CONFIG_PACKET_MMAP 1
#define CONFIG_UNIX 1
#undef CONFIG_NET_KEY
#define CONFIG_INET 1
#define CONFIG_IP_MULTICAST 1
#undef CONFIG_IP_ADVANCED_ROUTER
#define CONFIG_IP_PNP 1
#undef CONFIG_IP_PNP_DHCP
#define CONFIG_IP_PNP_BOOTP 1
#undef CONFIG_IP_PNP_RARP
#undef CONFIG_NET_IPIP
#undef CONFIG_NET_IPGRE
#undef CONFIG_IP_MROUTE
#undef CONFIG_ARPD
#undef CONFIG_SYN_COOKIES
#undef CONFIG_INET_AH
#undef CONFIG_INET_ESP
#undef CONFIG_INET_IPCOMP
#undef CONFIG_INET_TUNNEL
#define CONFIG_IP_TCPDIAG 1
#undef CONFIG_IP_TCPDIAG_IPV6
#undef CONFIG_IPV6
#undef CONFIG_NETFILTER

/*
 * SCTP Configuration (EXPERIMENTAL)
 */
#undef CONFIG_IP_SCTP
#undef CONFIG_ATM
#undef CONFIG_BRIDGE
#undef CONFIG_VLAN_8021Q
#undef CONFIG_DECNET
#undef CONFIG_LLC2
#undef CONFIG_IPX
#undef CONFIG_ATALK
#undef CONFIG_X25
#undef CONFIG_LAPB
#undef CONFIG_NET_DIVERT
#undef CONFIG_ECONET
#undef CONFIG_WAN_ROUTER

/*
 * QoS and/or fair queueing
 */
#undef CONFIG_NET_SCHED
#undef CONFIG_NET_CLS_ROUTE

/*
 * Network testing
 */
#undef CONFIG_NET_PKTGEN
#undef CONFIG_NETPOLL
#undef CONFIG_NET_POLL_CONTROLLER
#undef CONFIG_HAMRADIO
#undef CONFIG_IRDA
#undef CONFIG_BT
#define CONFIG_NETDEVICES 1
#undef CONFIG_DUMMY
#undef CONFIG_BONDING
#undef CONFIG_EQUALIZER
#undef CONFIG_TUN

/*
 * ARCnet devices
 */
#undef CONFIG_ARCNET

/*
 * Ethernet (10 or 100Mbit)
 */
#define CONFIG_NET_ETHERNET 1
#undef CONFIG_MII
#define CONFIG_LASI_82596 1
#undef CONFIG_HAPPYMEAL
#undef CONFIG_SUNGEM
#undef CONFIG_NET_VENDOR_3COM
#undef CONFIG_NET_VENDOR_SMC

/*
 * Tulip family network device support
 */
#define CONFIG_NET_TULIP 1
#undef CONFIG_DE2104X
#define CONFIG_TULIP 1
#undef CONFIG_TULIP_MWI
#undef CONFIG_TULIP_MMIO
#undef CONFIG_TULIP_NAPI
#undef CONFIG_DE4X5
#undef CONFIG_WINBOND_840
#undef CONFIG_DM9102
#undef CONFIG_DEPCA
#undef CONFIG_HP100
#define CONFIG_NET_PCI 1
#undef CONFIG_PCNET32
#undef CONFIG_AMD8111_ETH
#undef CONFIG_ADAPTEC_STARFIRE
#undef CONFIG_AC3200
#undef CONFIG_B44
#undef CONFIG_FORCEDETH
#undef CONFIG_DGRS
#undef CONFIG_EEPRO100
#undef CONFIG_E100
#undef CONFIG_LNE390
#undef CONFIG_FEALNX
#undef CONFIG_NATSEMI
#undef CONFIG_NE2K_PCI
#undef CONFIG_NE3210
#undef CONFIG_ES3210
#undef CONFIG_8139CP
#undef CONFIG_8139TOO
#undef CONFIG_SIS900
#undef CONFIG_EPIC100
#undef CONFIG_SUNDANCE
#undef CONFIG_TLAN
#undef CONFIG_VIA_RHINE

/*
 * Ethernet (1000 Mbit)
 */
#undef CONFIG_ACENIC
#define CONFIG_DL2K 1
#undef CONFIG_E1000
#undef CONFIG_NS83820
#undef CONFIG_HAMACHI
#undef CONFIG_YELLOWFIN
#undef CONFIG_R8169
#undef CONFIG_SK98LIN
#undef CONFIG_VIA_VELOCITY
#undef CONFIG_TIGON3
#undef CONFIG_BNX2

/*
 * Ethernet (10000 Mbit)
 */
#undef CONFIG_IXGB
#undef CONFIG_S2IO

/*
 * Token Ring devices
 */
#undef CONFIG_TR

/*
 * Wireless LAN (non-hamradio)
 */
#define CONFIG_NET_RADIO 1

/*
 * Obsolete Wireless cards support (pre-802.11)
 */
#undef CONFIG_STRIP

/*
 * Wireless 802.11b ISA/PCI cards support
 */
#undef CONFIG_HERMES
#undef CONFIG_ATMEL

/*
 * Prism GT/Duette 802.11(a/b/g) PCI/Cardbus support
 */
#undef CONFIG_PRISM54
#define CONFIG_NET_WIRELESS 1

/*
 * Wan interfaces
 */
#undef CONFIG_WAN
#undef CONFIG_FDDI
#undef CONFIG_HIPPI
#undef CONFIG_PLIP
#undef CONFIG_PPP
#undef CONFIG_SLIP
#undef CONFIG_NET_FC
#undef CONFIG_SHAPER
#undef CONFIG_NETCONSOLE

/*
 * ISDN subsystem
 */
#undef CONFIG_ISDN

/*
 * Telephony Support
 */
#undef CONFIG_PHONE

/*
 * Input device support
 */
#define CONFIG_INPUT 1

/*
 * Userland interfaces
 */
#define CONFIG_INPUT_MOUSEDEV 1
#define CONFIG_INPUT_MOUSEDEV_PSAUX 1
#define CONFIG_INPUT_MOUSEDEV_SCREEN_X 1024
#define CONFIG_INPUT_MOUSEDEV_SCREEN_Y 768
#undef CONFIG_INPUT_JOYDEV
#undef CONFIG_INPUT_TSDEV
#define CONFIG_INPUT_EVDEV 1
#undef CONFIG_INPUT_EVBUG

/*
 * Input Device Drivers
 */
#define CONFIG_INPUT_KEYBOARD 1
#undef CONFIG_KEYBOARD_ATKBD
#undef CONFIG_KEYBOARD_SUNKBD
#undef CONFIG_KEYBOARD_LKKBD
#undef CONFIG_KEYBOARD_XTKBD
#undef CONFIG_KEYBOARD_NEWTON
#define CONFIG_KEYBOARD_HIL_OLD 1
#define CONFIG_KEYBOARD_HIL 1
#define CONFIG_INPUT_MOUSE 1
#undef CONFIG_MOUSE_PS2
#undef CONFIG_MOUSE_SERIAL
#undef CONFIG_MOUSE_VSXXXAA
#undef CONFIG_MOUSE_HIL
#define CONFIG_INPUT_JOYSTICK 1
#undef CONFIG_JOYSTICK_ANALOG
#undef CONFIG_JOYSTICK_A3D
#undef CONFIG_JOYSTICK_ADI
#undef CONFIG_JOYSTICK_COBRA
#undef CONFIG_JOYSTICK_GF2K
#undef CONFIG_JOYSTICK_GRIP
#undef CONFIG_JOYSTICK_GRIP_MP
#undef CONFIG_JOYSTICK_GUILLEMOT
#undef CONFIG_JOYSTICK_INTERACT
#undef CONFIG_JOYSTICK_SIDEWINDER
#undef CONFIG_JOYSTICK_TMDC
#undef CONFIG_JOYSTICK_IFORCE
#undef CONFIG_JOYSTICK_WARRIOR
#undef CONFIG_JOYSTICK_MAGELLAN
#undef CONFIG_JOYSTICK_SPACEORB
#undef CONFIG_JOYSTICK_SPACEBALL
#undef CONFIG_JOYSTICK_STINGER
#undef CONFIG_JOYSTICK_TWIDJOY
#undef CONFIG_JOYSTICK_DB9
#undef CONFIG_JOYSTICK_GAMECON
#undef CONFIG_JOYSTICK_TURBOGRAFX
#undef CONFIG_JOYSTICK_JOYDUMP
#define CONFIG_INPUT_TOUCHSCREEN 1
#undef CONFIG_TOUCHSCREEN_GUNZE
#undef CONFIG_TOUCHSCREEN_ELO
#undef CONFIG_TOUCHSCREEN_MTOUCH
#undef CONFIG_TOUCHSCREEN_MK712
#define CONFIG_INPUT_MISC 1
#undef CONFIG_INPUT_UINPUT
#define CONFIG_HP_SDC_RTC 1

/*
 * Hardware I/O ports
 */
#define CONFIG_SERIO 1
#undef CONFIG_SERIO_SERPORT
#undef CONFIG_SERIO_PARKBD
#define CONFIG_SERIO_GSCPS2 1
#define CONFIG_HP_SDC 1
#define CONFIG_HIL_MLC 1
#undef CONFIG_SERIO_PCIPS2
#undef CONFIG_SERIO_RAW
#undef CONFIG_GAMEPORT

/*
 * Character devices
 */
#define CONFIG_VT 1
#define CONFIG_VT_CONSOLE 1
#define CONFIG_HW_CONSOLE 1
#undef CONFIG_SERIAL_NONSTANDARD

/*
 * Serial drivers
 */
#define CONFIG_SERIAL_8250 1
#define CONFIG_SERIAL_8250_CONSOLE 1
#define CONFIG_SERIAL_8250_NR_UARTS 4
#define CONFIG_SERIAL_8250_EXTENDED 1
#define CONFIG_SERIAL_8250_MANY_PORTS 1
#define CONFIG_SERIAL_8250_SHARE_IRQ 1
#undef CONFIG_SERIAL_8250_DETECT_IRQ
#undef CONFIG_SERIAL_8250_MULTIPORT
#undef CONFIG_SERIAL_8250_RSA

/*
 * Non-8250 serial port support
 */
#undef CONFIG_SERIAL_MUX
#undef CONFIG_PDC_CONSOLE
#define CONFIG_SERIAL_CORE 1
#define CONFIG_SERIAL_CORE_CONSOLE 1
#undef CONFIG_SERIAL_JSM
#define CONFIG_UNIX98_PTYS 1
#define CONFIG_LEGACY_PTYS 1
#define CONFIG_LEGACY_PTY_COUNT 256
#define CONFIG_PRINTER 1
#undef CONFIG_LP_CONSOLE
#undef CONFIG_PPDEV
#undef CONFIG_TIPAR

/*
 * IPMI
 */
#undef CONFIG_IPMI_HANDLER

/*
 * Watchdog Cards
 */
#undef CONFIG_WATCHDOG
#define CONFIG_GEN_RTC 1
#undef CONFIG_GEN_RTC_X
#undef CONFIG_DTLK
#undef CONFIG_R3964
#undef CONFIG_APPLICOM

/*
 * Ftape, the floppy tape device driver
 */
#undef CONFIG_DRM
#undef CONFIG_RAW_DRIVER

/*
 * TPM devices
 */
#undef CONFIG_TCG_TPM

/*
 * I2C support
 */
#undef CONFIG_I2C

/*
 * Dallas's 1-wire bus
 */
#undef CONFIG_W1

/*
 * Misc devices
 */

/*
 * Multimedia devices
 */
#undef CONFIG_VIDEO_DEV

/*
 * Digital Video Broadcasting Devices
 */
#undef CONFIG_DVB

/*
 * Graphics support
 */
#define CONFIG_FB 1
#define CONFIG_FB_CFB_FILLRECT 1
#define CONFIG_FB_CFB_COPYAREA 1
#define CONFIG_FB_CFB_IMAGEBLIT 1
#define CONFIG_FB_SOFT_CURSOR 1
#undef CONFIG_FB_MACMODES
#undef CONFIG_FB_MODE_HELPERS
#undef CONFIG_FB_TILEBLITTING
#undef CONFIG_FB_CIRRUS
#undef CONFIG_FB_PM2
#undef CONFIG_FB_CYBER2000
#undef CONFIG_FB_ASILIANT
#undef CONFIG_FB_IMSTT
#define CONFIG_FB_STI 1
#undef CONFIG_FB_NVIDIA
#undef CONFIG_FB_RIVA
#undef CONFIG_FB_MATROX
#undef CONFIG_FB_RADEON_OLD
#undef CONFIG_FB_RADEON
#undef CONFIG_FB_ATY128
#undef CONFIG_FB_ATY
#undef CONFIG_FB_SAVAGE
#undef CONFIG_FB_SIS
#undef CONFIG_FB_NEOMAGIC
#undef CONFIG_FB_KYRO
#undef CONFIG_FB_3DFX
#undef CONFIG_FB_VOODOO1
#undef CONFIG_FB_TRIDENT
#undef CONFIG_FB_S1D13XXX
#undef CONFIG_FB_VIRTUAL

/*
 * Console display driver support
 */
#define CONFIG_DUMMY_CONSOLE 1
#define CONFIG_DUMMY_CONSOLE_COLUMNS 160
#define CONFIG_DUMMY_CONSOLE_ROWS 64
#define CONFIG_FRAMEBUFFER_CONSOLE 1
#define CONFIG_STI_CONSOLE 1
#undef CONFIG_FONTS
#define CONFIG_FONT_8x8 1
#define CONFIG_FONT_8x16 1

/*
 * Logo configuration
 */
#undef CONFIG_LOGO
#undef CONFIG_BACKLIGHT_LCD_SUPPORT

/*
 * Sound
 */
#define CONFIG_SOUND 1

/*
 * Advanced Linux Sound Architecture
 */
#undef CONFIG_SND

/*
 * Open Sound System
 */
#undef CONFIG_SOUND_PRIME

/*
 * USB support
 */
#define CONFIG_USB_ARCH_HAS_HCD 1
#define CONFIG_USB_ARCH_HAS_OHCI 1
#define CONFIG_USB 1
#define CONFIG_USB_DEBUG 1

/*
 * Miscellaneous USB options
 */
#undef CONFIG_USB_DEVICEFS
#undef CONFIG_USB_BANDWIDTH
#undef CONFIG_USB_DYNAMIC_MINORS
#undef CONFIG_USB_OTG

/*
 * USB Host Controller Drivers
 */
#define CONFIG_USB_EHCI_HCD 1
#undef CONFIG_USB_EHCI_SPLIT_ISO
#undef CONFIG_USB_EHCI_ROOT_HUB_TT
#define CONFIG_USB_OHCI_HCD 1
#undef CONFIG_USB_OHCI_BIG_ENDIAN
#define CONFIG_USB_OHCI_LITTLE_ENDIAN 1
#undef CONFIG_USB_UHCI_HCD
#undef CONFIG_USB_SL811_HCD

/*
 * USB Device Class drivers
 */
#undef CONFIG_USB_AUDIO
#undef CONFIG_USB_BLUETOOTH_TTY
#undef CONFIG_USB_MIDI
#undef CONFIG_USB_ACM
#undef CONFIG_USB_PRINTER

/*
 * NOTE: USB_STORAGE enables SCSI, and 'SCSI disk support' may also be needed; see USB_STORAGE Help for more information
 */
#undef CONFIG_USB_STORAGE

/*
 * USB Input Devices
 */
#undef CONFIG_USB_HID

/*
 * USB HID Boot Protocol drivers
 */
#undef CONFIG_USB_KBD
#undef CONFIG_USB_MOUSE
#undef CONFIG_USB_AIPTEK
#undef CONFIG_USB_WACOM
#undef CONFIG_USB_KBTAB
#undef CONFIG_USB_POWERMATE
#undef CONFIG_USB_MTOUCH
#undef CONFIG_USB_EGALAX
#undef CONFIG_USB_XPAD
#undef CONFIG_USB_ATI_REMOTE

/*
 * USB Imaging devices
 */
#undef CONFIG_USB_MDC800
#undef CONFIG_USB_MICROTEK

/*
 * USB Multimedia devices
 */
#undef CONFIG_USB_DABUSB

/*
 * Video4Linux support is needed for USB Multimedia device support
 */

/*
 * USB Network Adapters
 */
#undef CONFIG_USB_CATC
#undef CONFIG_USB_KAWETH
#undef CONFIG_USB_PEGASUS
#undef CONFIG_USB_RTL8150
#undef CONFIG_USB_USBNET
#undef CONFIG_USB_ZD1201
#define CONFIG_USB_MON 1

/*
 * USB port drivers
 */
#undef CONFIG_USB_USS720

/*
 * USB Serial Converter support
 */
#undef CONFIG_USB_SERIAL

/*
 * USB Miscellaneous drivers
 */
#undef CONFIG_USB_EMI62
#undef CONFIG_USB_EMI26
#undef CONFIG_USB_AUERSWALD
#undef CONFIG_USB_RIO500
#undef CONFIG_USB_LEGOTOWER
#undef CONFIG_USB_LCD
#undef CONFIG_USB_LED
#undef CONFIG_USB_CYTHERM
#undef CONFIG_USB_PHIDGETKIT
#undef CONFIG_USB_PHIDGETSERVO
#undef CONFIG_USB_IDMOUSE
#undef CONFIG_USB_SISUSBVGA

/*
 * USB ATM/DSL drivers
 */

/*
 * USB Gadget Support
 */
#undef CONFIG_USB_GADGET

/*
 * MMC/SD Card support
 */
#undef CONFIG_MMC

/*
 * InfiniBand support
 */
#undef CONFIG_INFINIBAND

/*
 * File systems
 */
#define CONFIG_EXT2_FS 1
#undef CONFIG_EXT2_FS_XATTR
#define CONFIG_EXT3_FS 1
#undef CONFIG_EXT3_FS_XATTR
#define CONFIG_JBD 1
#undef CONFIG_JBD_DEBUG
#undef CONFIG_REISERFS_FS
#undef CONFIG_JFS_FS

/*
 * XFS support
 */
#undef CONFIG_XFS_FS
#undef CONFIG_MINIX_FS
#undef CONFIG_ROMFS_FS
#undef CONFIG_QUOTA
#define CONFIG_DNOTIFY 1
#undef CONFIG_AUTOFS_FS
#undef CONFIG_AUTOFS4_FS

/*
 * CD-ROM/DVD Filesystems
 */
#define CONFIG_ISO9660_FS 1
#define CONFIG_JOLIET 1
#undef CONFIG_ZISOFS
#undef CONFIG_UDF_FS

/*
 * DOS/FAT/NT Filesystems
 */
#undef CONFIG_MSDOS_FS
#undef CONFIG_VFAT_FS
#undef CONFIG_NTFS_FS

/*
 * Pseudo filesystems
 */
#define CONFIG_PROC_FS 1
#define CONFIG_PROC_KCORE 1
#define CONFIG_SYSFS 1
#undef CONFIG_DEVFS_FS
#undef CONFIG_DEVPTS_FS_XATTR
#define CONFIG_TMPFS 1
#undef CONFIG_TMPFS_XATTR
#undef CONFIG_HUGETLB_PAGE
#define CONFIG_RAMFS 1

/*
 * Miscellaneous filesystems
 */
#undef CONFIG_ADFS_FS
#undef CONFIG_AFFS_FS
#undef CONFIG_HFS_FS
#undef CONFIG_HFSPLUS_FS
#undef CONFIG_BEFS_FS
#undef CONFIG_BFS_FS
#undef CONFIG_EFS_FS
#undef CONFIG_CRAMFS
#undef CONFIG_VXFS_FS
#undef CONFIG_HPFS_FS
#undef CONFIG_QNX4FS_FS
#undef CONFIG_SYSV_FS
#undef CONFIG_UFS_FS

/*
 * Network File Systems
 */
#define CONFIG_NFS_FS 1
#define CONFIG_NFS_V3 1
#undef CONFIG_NFS_V4
#undef CONFIG_NFS_DIRECTIO
#define CONFIG_NFSD 1
#define CONFIG_NFSD_V3 1
#undef CONFIG_NFSD_V4
#define CONFIG_NFSD_TCP 1
#define CONFIG_ROOT_NFS 1
#define CONFIG_LOCKD 1
#define CONFIG_LOCKD_V4 1
#define CONFIG_EXPORTFS 1
#define CONFIG_SUNRPC 1
#undef CONFIG_RPCSEC_GSS_KRB5
#undef CONFIG_RPCSEC_GSS_SPKM3
#undef CONFIG_SMB_FS
#undef CONFIG_CIFS
#undef CONFIG_NCP_FS
#undef CONFIG_CODA_FS
#undef CONFIG_AFS_FS

/*
 * Partition Types
 */
#undef CONFIG_PARTITION_ADVANCED
#define CONFIG_MSDOS_PARTITION 1

/*
 * Native Language Support
 */
#define CONFIG_NLS 1
#define CONFIG_NLS_DEFAULT "iso8859-1"
#undef CONFIG_NLS_CODEPAGE_437
#undef CONFIG_NLS_CODEPAGE_737
#undef CONFIG_NLS_CODEPAGE_775
#undef CONFIG_NLS_CODEPAGE_850
#undef CONFIG_NLS_CODEPAGE_852
#undef CONFIG_NLS_CODEPAGE_855
#undef CONFIG_NLS_CODEPAGE_857
#undef CONFIG_NLS_CODEPAGE_860
#undef CONFIG_NLS_CODEPAGE_861
#undef CONFIG_NLS_CODEPAGE_862
#undef CONFIG_NLS_CODEPAGE_863
#undef CONFIG_NLS_CODEPAGE_864
#undef CONFIG_NLS_CODEPAGE_865
#undef CONFIG_NLS_CODEPAGE_866
#undef CONFIG_NLS_CODEPAGE_869
#undef CONFIG_NLS_CODEPAGE_936
#undef CONFIG_NLS_CODEPAGE_950
#undef CONFIG_NLS_CODEPAGE_932
#undef CONFIG_NLS_CODEPAGE_949
#undef CONFIG_NLS_CODEPAGE_874
#undef CONFIG_NLS_ISO8859_8
#undef CONFIG_NLS_CODEPAGE_1250
#undef CONFIG_NLS_CODEPAGE_1251
#undef CONFIG_NLS_ASCII
#undef CONFIG_NLS_ISO8859_1
#undef CONFIG_NLS_ISO8859_2
#undef CONFIG_NLS_ISO8859_3
#undef CONFIG_NLS_ISO8859_4
#undef CONFIG_NLS_ISO8859_5
#undef CONFIG_NLS_ISO8859_6
#undef CONFIG_NLS_ISO8859_7
#undef CONFIG_NLS_ISO8859_9
#undef CONFIG_NLS_ISO8859_13
#undef CONFIG_NLS_ISO8859_14
#undef CONFIG_NLS_ISO8859_15
#undef CONFIG_NLS_KOI8_R
#undef CONFIG_NLS_KOI8_U
#undef CONFIG_NLS_UTF8

/*
 * Profiling support
 */
#define CONFIG_PROFILING 1
#define CONFIG_OPROFILE 1

/*
 * Kernel hacking
 */
#undef CONFIG_PRINTK_TIME
#define CONFIG_DEBUG_KERNEL 1
#define CONFIG_MAGIC_SYSRQ 1
#define CONFIG_LOG_BUF_SHIFT 15
#undef CONFIG_SCHEDSTATS
#undef CONFIG_DEBUG_SLAB
#undef CONFIG_DEBUG_SPINLOCK
#undef CONFIG_DEBUG_SPINLOCK_SLEEP
#undef CONFIG_DEBUG_KOBJECT
#undef CONFIG_DEBUG_INFO
#undef CONFIG_DEBUG_IOREMAP
#undef CONFIG_DEBUG_FS

/*
 * Security options
 */
#undef CONFIG_KEYS
#undef CONFIG_SECURITY

/*
 * Cryptographic options
 */
#define CONFIG_CRYPTO 1
#undef CONFIG_CRYPTO_HMAC
#undef CONFIG_CRYPTO_NULL
#undef CONFIG_CRYPTO_MD4
#undef CONFIG_CRYPTO_MD5
#undef CONFIG_CRYPTO_SHA1
#undef CONFIG_CRYPTO_SHA256
#undef CONFIG_CRYPTO_SHA512
#undef CONFIG_CRYPTO_WP512
#undef CONFIG_CRYPTO_TGR192
#undef CONFIG_CRYPTO_DES
#undef CONFIG_CRYPTO_BLOWFISH
#undef CONFIG_CRYPTO_TWOFISH
#undef CONFIG_CRYPTO_SERPENT
#undef CONFIG_CRYPTO_AES
#undef CONFIG_CRYPTO_CAST5
#undef CONFIG_CRYPTO_CAST6
#undef CONFIG_CRYPTO_TEA
#undef CONFIG_CRYPTO_ARC4
#undef CONFIG_CRYPTO_KHAZAD
#undef CONFIG_CRYPTO_ANUBIS
#undef CONFIG_CRYPTO_DEFLATE
#undef CONFIG_CRYPTO_MICHAEL_MIC
#undef CONFIG_CRYPTO_CRC32C
#undef CONFIG_CRYPTO_TEST

/*
 * Hardware crypto devices
 */

/*
 * Library routines
 */
#undef CONFIG_CRC_CCITT
#define CONFIG_CRC32 1
#undef CONFIG_LIBCRC32C
