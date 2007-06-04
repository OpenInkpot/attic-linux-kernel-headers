/*
 * Automatically generated C config: don't edit
 * Linux kernel version: 2.6.12
 * Sat Jun 18 16:11:08 2005
 */
#define AUTOCONF_INCLUDED
#define CONFIG_M32R 1
#undef CONFIG_UID16
#define CONFIG_GENERIC_ISA_DMA 1
#define CONFIG_GENERIC_HARDIRQS 1
#define CONFIG_GENERIC_IRQ_PROBE 1

/*
 * Code maturity level options
 */
#define CONFIG_EXPERIMENTAL 1
#define CONFIG_CLEAN_COMPILE 1
#define CONFIG_BROKEN_ON_SMP 1
#define CONFIG_LOCK_KERNEL 1
#define CONFIG_INIT_ENV_ARG_LIMIT 32

/*
 * General setup
 */
#define CONFIG_LOCALVERSION ""
#define CONFIG_SWAP 1
#define CONFIG_SYSVIPC 1
#undef CONFIG_POSIX_MQUEUE
#define CONFIG_BSD_PROCESS_ACCT 1
#undef CONFIG_BSD_PROCESS_ACCT_V3
#define CONFIG_SYSCTL 1
#undef CONFIG_AUDIT
#define CONFIG_HOTPLUG 1
#define CONFIG_KOBJECT_UEVENT 1
#define CONFIG_IKCONFIG 1
#undef CONFIG_IKCONFIG_PROC
#define CONFIG_EMBEDDED 1
#undef CONFIG_KALLSYMS
#define CONFIG_PRINTK 1
#define CONFIG_BUG 1
#define CONFIG_BASE_FULL 1
#undef CONFIG_FUTEX
#undef CONFIG_EPOLL
#undef CONFIG_CC_OPTIMIZE_FOR_SIZE
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
#define CONFIG_MODULES 1
#define CONFIG_MODULE_UNLOAD 1
#undef CONFIG_MODULE_FORCE_UNLOAD
#define CONFIG_OBSOLETE_MODPARM 1
#undef CONFIG_MODVERSIONS
#undef CONFIG_MODULE_SRCVERSION_ALL
#define CONFIG_KMOD 1

/*
 * Processor type and features
 */
#undef CONFIG_PLAT_MAPPI
#undef CONFIG_PLAT_USRV
#define CONFIG_PLAT_M32700UT 1
#undef CONFIG_PLAT_OPSPUT
#undef CONFIG_PLAT_OAKS32R
#undef CONFIG_PLAT_MAPPI2
#define CONFIG_CHIP_M32700 1
#undef CONFIG_CHIP_M32102
#undef CONFIG_CHIP_VDEC2
#undef CONFIG_CHIP_OPSP
#define CONFIG_MMU 1
#define CONFIG_TLB_ENTRIES 32
#define CONFIG_ISA_M32R2 1
#define CONFIG_ISA_DSP_LEVEL2 1
#define CONFIG_ISA_DUAL_ISSUE 1
#define CONFIG_BUS_CLOCK 50000000
#define CONFIG_TIMER_DIVIDE 128
#undef CONFIG_CPU_LITTLE_ENDIAN
#define CONFIG_MEMORY_START 0x08000000
#define CONFIG_MEMORY_SIZE 0x01000000
#define CONFIG_NOHIGHMEM 1
#undef CONFIG_DISCONTIGMEM
#define CONFIG_RWSEM_GENERIC_SPINLOCK 1
#undef CONFIG_RWSEM_XCHGADD_ALGORITHM
#define CONFIG_GENERIC_CALIBRATE_DELAY 1
#define CONFIG_PREEMPT 1
#undef CONFIG_HAVE_DEC_LOCK
#undef CONFIG_SMP

/*
 * Bus options (PCI, PCMCIA, EISA, MCA, ISA)
 */
#undef CONFIG_PCI
#undef CONFIG_ISA

/*
 * PCCARD (PCMCIA/CardBus) support
 */
#define CONFIG_PCCARD 1
#undef CONFIG_PCMCIA_DEBUG
#define CONFIG_PCMCIA 1

/*
 * PC-card bridges
 */
#undef CONFIG_TCIC
#undef CONFIG_M32R_PCC
#define CONFIG_M32R_CFC 1
#define CONFIG_M32R_CFC_NUM 1

/*
 * PCI Hotplug Support
 */

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

/*
 * Memory Technology Devices (MTD)
 */
#undef CONFIG_MTD

/*
 * Parallel port support
 */
#undef CONFIG_PARPORT

/*
 * Plug and Play support
 */

/*
 * Block devices
 */
#undef CONFIG_BLK_DEV_FD
#undef CONFIG_BLK_DEV_COW_COMMON
#define CONFIG_BLK_DEV_LOOP 1
#undef CONFIG_BLK_DEV_CRYPTOLOOP
#define CONFIG_BLK_DEV_NBD 1
#define CONFIG_BLK_DEV_RAM 1
#define CONFIG_BLK_DEV_RAM_COUNT 16
#define CONFIG_BLK_DEV_RAM_SIZE 4096
#undef CONFIG_BLK_DEV_INITRD
#define CONFIG_INITRAMFS_SOURCE ""
#undef CONFIG_CDROM_PKTCDVD

/*
 * IO Schedulers
 */
#define CONFIG_IOSCHED_NOOP 1
#undef CONFIG_IOSCHED_AS
#define CONFIG_IOSCHED_DEADLINE 1
#define CONFIG_IOSCHED_CFQ 1
#undef CONFIG_ATA_OVER_ETH

/*
 * ATA/ATAPI/MFM/RLL support
 */
#define CONFIG_IDE 1
#define CONFIG_BLK_DEV_IDE 1

/*
 * Please see Documentation/ide.txt for help/info on IDE drives
 */
#undef CONFIG_BLK_DEV_IDE_SATA
#define CONFIG_BLK_DEV_IDEDISK 1
#undef CONFIG_IDEDISK_MULTI_MODE
#define CONFIG_BLK_DEV_IDECS 1
#define CONFIG_BLK_DEV_IDECD_MODULE 1
#undef CONFIG_BLK_DEV_IDETAPE
#undef CONFIG_BLK_DEV_IDEFLOPPY
#undef CONFIG_BLK_DEV_IDESCSI
#undef CONFIG_IDE_TASK_IOCTL

/*
 * IDE chipset support/bugfixes
 */
#define CONFIG_IDE_GENERIC 1
#undef CONFIG_IDE_ARM
#undef CONFIG_BLK_DEV_IDEDMA
#undef CONFIG_IDEDMA_AUTO
#undef CONFIG_BLK_DEV_HD

/*
 * SCSI device support
 */
#define CONFIG_SCSI_MODULE 1
#define CONFIG_SCSI_PROC_FS 1

/*
 * SCSI support type (disk, tape, CD-ROM)
 */
#define CONFIG_BLK_DEV_SD_MODULE 1
#undef CONFIG_CHR_DEV_ST
#undef CONFIG_CHR_DEV_OSST
#define CONFIG_BLK_DEV_SR_MODULE 1
#undef CONFIG_BLK_DEV_SR_VENDOR
#define CONFIG_CHR_DEV_SG_MODULE 1

/*
 * Some SCSI devices (e.g. CD jukebox) support multiple LUNs
 */
#define CONFIG_SCSI_MULTI_LUN 1
#undef CONFIG_SCSI_CONSTANTS
#undef CONFIG_SCSI_LOGGING

/*
 * SCSI Transport Attributes
 */
#undef CONFIG_SCSI_SPI_ATTRS
#undef CONFIG_SCSI_FC_ATTRS
#undef CONFIG_SCSI_ISCSI_ATTRS

/*
 * SCSI low-level drivers
 */
#undef CONFIG_SCSI_SATA
#undef CONFIG_SCSI_DEBUG

/*
 * PCMCIA SCSI adapter support
 */
#undef CONFIG_PCMCIA_AHA152X
#undef CONFIG_PCMCIA_FDOMAIN
#undef CONFIG_PCMCIA_NINJA_SCSI
#undef CONFIG_PCMCIA_QLOGIC
#undef CONFIG_PCMCIA_SYM53C500

/*
 * Multi-device support (RAID and LVM)
 */
#undef CONFIG_MD

/*
 * Fusion MPT device support
 */

/*
 * IEEE 1394 (FireWire) support
 */

/*
 * I2O device support
 */

/*
 * Networking support
 */
#define CONFIG_NET 1

/*
 * Networking options
 */
#define CONFIG_PACKET 1
#undef CONFIG_PACKET_MMAP
#define CONFIG_UNIX 1
#undef CONFIG_NET_KEY
#define CONFIG_INET 1
#undef CONFIG_IP_MULTICAST
#undef CONFIG_IP_ADVANCED_ROUTER
#define CONFIG_IP_PNP 1
#define CONFIG_IP_PNP_DHCP 1
#undef CONFIG_IP_PNP_BOOTP
#undef CONFIG_IP_PNP_RARP
#undef CONFIG_NET_IPIP
#undef CONFIG_NET_IPGRE
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
 * Ethernet (10 or 100Mbit)
 */
#define CONFIG_NET_ETHERNET 1
#define CONFIG_MII 1
#define CONFIG_SMC91X 1
#undef CONFIG_NE2000

/*
 * Ethernet (1000 Mbit)
 */

/*
 * Ethernet (10000 Mbit)
 */

/*
 * Token Ring devices
 */

/*
 * Wireless LAN (non-hamradio)
 */
#undef CONFIG_NET_RADIO

/*
 * PCMCIA network device support
 */
#undef CONFIG_NET_PCMCIA

/*
 * Wan interfaces
 */
#undef CONFIG_WAN
#undef CONFIG_PPP
#undef CONFIG_SLIP
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
#undef CONFIG_INPUT_MOUSEDEV
#undef CONFIG_INPUT_JOYDEV
#undef CONFIG_INPUT_TSDEV
#undef CONFIG_INPUT_EVDEV
#undef CONFIG_INPUT_EVBUG

/*
 * Input Device Drivers
 */
#undef CONFIG_INPUT_KEYBOARD
#undef CONFIG_INPUT_MOUSE
#undef CONFIG_INPUT_JOYSTICK
#undef CONFIG_INPUT_TOUCHSCREEN
#undef CONFIG_INPUT_MISC

/*
 * Hardware I/O ports
 */
#define CONFIG_SERIO 1
#undef CONFIG_SERIO_I8042
#define CONFIG_SERIO_SERPORT 1
#undef CONFIG_SERIO_LIBPS2
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
#undef CONFIG_SERIAL_8250

/*
 * Non-8250 serial port support
 */
#define CONFIG_SERIAL_CORE 1
#define CONFIG_SERIAL_CORE_CONSOLE 1
#define CONFIG_SERIAL_M32R_SIO 1
#define CONFIG_SERIAL_M32R_SIO_CONSOLE 1
#define CONFIG_SERIAL_M32R_PLDSIO 1
#define CONFIG_UNIX98_PTYS 1
#define CONFIG_LEGACY_PTYS 1
#define CONFIG_LEGACY_PTY_COUNT 256

/*
 * IPMI
 */
#undef CONFIG_IPMI_HANDLER

/*
 * Watchdog Cards
 */
#undef CONFIG_WATCHDOG
#undef CONFIG_RTC
#undef CONFIG_GEN_RTC
#define CONFIG_DS1302 1
#undef CONFIG_DTLK
#undef CONFIG_R3964

/*
 * Ftape, the floppy tape device driver
 */
#undef CONFIG_DRM

/*
 * PCMCIA character devices
 */
#undef CONFIG_SYNCLINK_CS
#undef CONFIG_RAW_DRIVER

/*
 * TPM devices
 */

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
#define CONFIG_VIDEO_DEV 1

/*
 * Video For Linux
 */

/*
 * Video Adapters
 */
#undef CONFIG_VIDEO_CPIA
#define CONFIG_VIDEO_M32R_AR 1
#define CONFIG_VIDEO_M32R_AR_M64278 1

/*
 * Radio Adapters
 */
#undef CONFIG_RADIO_MAESTRO

/*
 * Digital Video Broadcasting Devices
 */
#undef CONFIG_DVB

/*
 * Graphics support
 */
#define CONFIG_FB 1
#undef CONFIG_FB_CFB_FILLRECT
#undef CONFIG_FB_CFB_COPYAREA
#undef CONFIG_FB_CFB_IMAGEBLIT
#undef CONFIG_FB_SOFT_CURSOR
#undef CONFIG_FB_MACMODES
#undef CONFIG_FB_MODE_HELPERS
#undef CONFIG_FB_TILEBLITTING
#undef CONFIG_FB_S1D13XXX
#undef CONFIG_FB_VIRTUAL

/*
 * Console display driver support
 */
#undef CONFIG_VGA_CONSOLE
#define CONFIG_DUMMY_CONSOLE 1
#define CONFIG_FRAMEBUFFER_CONSOLE 1
#undef CONFIG_FONTS
#define CONFIG_FONT_8x8 1
#define CONFIG_FONT_8x16 1

/*
 * Logo configuration
 */
#define CONFIG_LOGO 1
#define CONFIG_LOGO_LINUX_MONO 1
#define CONFIG_LOGO_LINUX_VGA16 1
#define CONFIG_LOGO_LINUX_CLUT224 1
#undef CONFIG_BACKLIGHT_LCD_SUPPORT

/*
 * Sound
 */
#undef CONFIG_SOUND

/*
 * USB support
 */
#undef CONFIG_USB_ARCH_HAS_HCD
#undef CONFIG_USB_ARCH_HAS_OHCI

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
#define CONFIG_EXT3_FS_MODULE 1
#define CONFIG_EXT3_FS_XATTR 1
#undef CONFIG_EXT3_FS_POSIX_ACL
#undef CONFIG_EXT3_FS_SECURITY
#define CONFIG_JBD_MODULE 1
#define CONFIG_JBD_DEBUG 1
#define CONFIG_FS_MBCACHE 1
#define CONFIG_REISERFS_FS_MODULE 1
#undef CONFIG_REISERFS_CHECK
#undef CONFIG_REISERFS_PROC_INFO
#undef CONFIG_REISERFS_FS_XATTR
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
#define CONFIG_ISO9660_FS_MODULE 1
#define CONFIG_JOLIET 1
#undef CONFIG_ZISOFS
#define CONFIG_UDF_FS_MODULE 1
#define CONFIG_UDF_NLS 1

/*
 * DOS/FAT/NT Filesystems
 */
#define CONFIG_FAT_FS_MODULE 1
#define CONFIG_MSDOS_FS_MODULE 1
#define CONFIG_VFAT_FS_MODULE 1
#define CONFIG_FAT_DEFAULT_CODEPAGE 437
#define CONFIG_FAT_DEFAULT_IOCHARSET "iso8859-1"
#undef CONFIG_NTFS_FS

/*
 * Pseudo filesystems
 */
#define CONFIG_PROC_FS 1
#define CONFIG_PROC_KCORE 1
#define CONFIG_SYSFS 1
#define CONFIG_DEVFS_FS 1
#define CONFIG_DEVFS_MOUNT 1
#undef CONFIG_DEVFS_DEBUG
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
#undef CONFIG_NFSD
#define CONFIG_ROOT_NFS 1
#define CONFIG_LOCKD 1
#define CONFIG_LOCKD_V4 1
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
#undef CONFIG_PROFILING

/*
 * Kernel hacking
 */
#undef CONFIG_PRINTK_TIME
#undef CONFIG_DEBUG_KERNEL
#define CONFIG_LOG_BUF_SHIFT 14
#undef CONFIG_DEBUG_BUGVERBOSE
#undef CONFIG_FRAME_POINTER

/*
 * Security options
 */
#undef CONFIG_KEYS
#undef CONFIG_SECURITY

/*
 * Cryptographic options
 */
#undef CONFIG_CRYPTO

/*
 * Hardware crypto devices
 */

/*
 * Library routines
 */
#undef CONFIG_CRC_CCITT
#define CONFIG_CRC32 1
#undef CONFIG_LIBCRC32C
