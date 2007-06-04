/*
 * Automatically generated C config: don't edit
 * Linux kernel version: 2.6.12
 * Sat Jun 18 16:11:16 2005
 */
#define AUTOCONF_INCLUDED
#define CONFIG_M68K 1
#define CONFIG_MMU 1
#define CONFIG_UID16 1
#define CONFIG_RWSEM_GENERIC_SPINLOCK 1
#define CONFIG_GENERIC_CALIBRATE_DELAY 1

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
#undef CONFIG_IKCONFIG
#undef CONFIG_EMBEDDED
#define CONFIG_KALLSYMS 1
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
 * Platform dependent setup
 */
#undef CONFIG_SUN3
#define CONFIG_AMIGA 1
#undef CONFIG_ATARI
#undef CONFIG_MAC
#undef CONFIG_APOLLO
#undef CONFIG_VME
#undef CONFIG_HP300
#undef CONFIG_SUN3X
#undef CONFIG_Q40

/*
 * Processor type
 */
#define CONFIG_M68020 1
#define CONFIG_M68030 1
#define CONFIG_M68040 1
#undef CONFIG_M68060
#define CONFIG_MMU_MOTOROLA 1
#undef CONFIG_M68KFPU_EMU
#undef CONFIG_ADVANCED

/*
 * General setup
 */
#define CONFIG_BINFMT_ELF 1
#define CONFIG_BINFMT_AOUT 1
#undef CONFIG_BINFMT_MISC
#define CONFIG_ZORRO 1
#undef CONFIG_AMIGA_PCMCIA
#undef CONFIG_HEARTBEAT
#define CONFIG_PROC_HARDWARE 1
#undef CONFIG_ZORRO_NAMES

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
#define CONFIG_AMIGA_FLOPPY 1
#undef CONFIG_AMIGA_Z2RAM
#undef CONFIG_BLK_DEV_COW_COMMON
#undef CONFIG_BLK_DEV_LOOP
#undef CONFIG_BLK_DEV_NBD
#define CONFIG_BLK_DEV_RAM 1
#define CONFIG_BLK_DEV_RAM_COUNT 16
#define CONFIG_BLK_DEV_RAM_SIZE 4096
#define CONFIG_BLK_DEV_INITRD 1
#define CONFIG_INITRAMFS_SOURCE ""
#define CONFIG_CDROM_PKTCDVD 1
#define CONFIG_CDROM_PKTCDVD_BUFFERS 8
#undef CONFIG_CDROM_PKTCDVD_WCACHE

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
#undef CONFIG_CHR_DEV_SG

/*
 * Some SCSI devices (e.g. CD jukebox) support multiple LUNs
 */
#undef CONFIG_SCSI_MULTI_LUN
#define CONFIG_SCSI_CONSTANTS 1
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
#define CONFIG_A3000_SCSI 1
#define CONFIG_A2091_SCSI 1
#define CONFIG_GVP11_SCSI 1
#undef CONFIG_CYBERSTORM_SCSI
#undef CONFIG_CYBERSTORMII_SCSI
#undef CONFIG_BLZ2060_SCSI
#undef CONFIG_BLZ1230_SCSI
#undef CONFIG_FASTLANE_SCSI
#undef CONFIG_OKTAGON_SCSI

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
#undef CONFIG_IP_PNP
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
#undef CONFIG_NET_ETHERNET

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
#define CONFIG_INPUT_MOUSEDEV 1
#define CONFIG_INPUT_MOUSEDEV_PSAUX 1
#define CONFIG_INPUT_MOUSEDEV_SCREEN_X 1024
#define CONFIG_INPUT_MOUSEDEV_SCREEN_Y 768
#undef CONFIG_INPUT_JOYDEV
#undef CONFIG_INPUT_TSDEV
#undef CONFIG_INPUT_EVDEV
#undef CONFIG_INPUT_EVBUG

/*
 * Input Device Drivers
 */
#define CONFIG_INPUT_KEYBOARD 1
#define CONFIG_KEYBOARD_ATKBD 1
#undef CONFIG_KEYBOARD_SUNKBD
#undef CONFIG_KEYBOARD_LKKBD
#undef CONFIG_KEYBOARD_XTKBD
#undef CONFIG_KEYBOARD_NEWTON
#undef CONFIG_KEYBOARD_AMIGA
#define CONFIG_INPUT_MOUSE 1
#define CONFIG_MOUSE_PS2 1
#undef CONFIG_MOUSE_SERIAL
#undef CONFIG_MOUSE_AMIGA
#undef CONFIG_MOUSE_VSXXXAA
#undef CONFIG_INPUT_JOYSTICK
#undef CONFIG_INPUT_TOUCHSCREEN
#undef CONFIG_INPUT_MISC

/*
 * Hardware I/O ports
 */
#define CONFIG_SERIO 1
#define CONFIG_SERIO_SERPORT 1
#define CONFIG_SERIO_LIBPS2 1
#undef CONFIG_SERIO_RAW
#undef CONFIG_GAMEPORT

/*
 * Character devices
 */
#define CONFIG_VT 1
#define CONFIG_VT_CONSOLE 1
#define CONFIG_HW_CONSOLE 1
#undef CONFIG_SERIAL_NONSTANDARD
#undef CONFIG_A2232

/*
 * Serial drivers
 */
#undef CONFIG_SERIAL_8250

/*
 * Non-8250 serial port support
 */
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
#undef CONFIG_GEN_RTC
#undef CONFIG_DTLK
#undef CONFIG_R3964

/*
 * Ftape, the floppy tape device driver
 */
#undef CONFIG_DRM
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
#undef CONFIG_VIDEO_DEV

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
#define CONFIG_FB_SOFT_CURSOR 1
#undef CONFIG_FB_MACMODES
#define CONFIG_FB_MODE_HELPERS 1
#undef CONFIG_FB_TILEBLITTING
#undef CONFIG_FB_CIRRUS
#define CONFIG_FB_AMIGA 1
#define CONFIG_FB_AMIGA_OCS 1
#define CONFIG_FB_AMIGA_ECS 1
#define CONFIG_FB_AMIGA_AGA 1
#undef CONFIG_FB_FM2
#undef CONFIG_FB_S1D13XXX
#undef CONFIG_FB_VIRTUAL

/*
 * Console display driver support
 */
#define CONFIG_DUMMY_CONSOLE 1
#undef CONFIG_FRAMEBUFFER_CONSOLE

/*
 * Logo configuration
 */
#undef CONFIG_LOGO
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
 * Character devices
 */
#define CONFIG_AMIGA_BUILTIN_SERIAL 1
#undef CONFIG_MULTIFACE_III_TTY
#undef CONFIG_GVPIOEXT
#undef CONFIG_SERIAL_CONSOLE

/*
 * File systems
 */
#define CONFIG_EXT2_FS 1
#undef CONFIG_EXT2_FS_XATTR
#undef CONFIG_EXT3_FS
#undef CONFIG_JBD
#undef CONFIG_REISERFS_FS
#undef CONFIG_JFS_FS

/*
 * XFS support
 */
#undef CONFIG_XFS_FS
#define CONFIG_MINIX_FS 1
#undef CONFIG_ROMFS_FS
#undef CONFIG_QUOTA
#define CONFIG_DNOTIFY 1
#undef CONFIG_AUTOFS_FS
#undef CONFIG_AUTOFS4_FS

/*
 * CD-ROM/DVD Filesystems
 */
#undef CONFIG_ISO9660_FS
#undef CONFIG_UDF_FS

/*
 * DOS/FAT/NT Filesystems
 */
#define CONFIG_FAT_FS 1
#define CONFIG_MSDOS_FS 1
#undef CONFIG_VFAT_FS
#define CONFIG_FAT_DEFAULT_CODEPAGE 437
#undef CONFIG_NTFS_FS

/*
 * Pseudo filesystems
 */
#define CONFIG_PROC_FS 1
#define CONFIG_PROC_KCORE 1
#define CONFIG_SYSFS 1
#undef CONFIG_DEVFS_FS
#undef CONFIG_DEVPTS_FS_XATTR
#undef CONFIG_TMPFS
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
#undef CONFIG_NFS_V3
#undef CONFIG_NFS_V4
#undef CONFIG_NFS_DIRECTIO
#undef CONFIG_NFSD
#define CONFIG_LOCKD 1
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
#define CONFIG_AMIGA_PARTITION 1
#define CONFIG_MSDOS_PARTITION 1

/*
 * Native Language Support
 */
#define CONFIG_NLS 1
#define CONFIG_NLS_DEFAULT "iso8859-1"
#define CONFIG_NLS_CODEPAGE_437 1
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
 * Kernel hacking
 */
#undef CONFIG_PRINTK_TIME
#undef CONFIG_DEBUG_KERNEL
#define CONFIG_LOG_BUF_SHIFT 14
#define CONFIG_DEBUG_BUGVERBOSE 1

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
