#
# Copyright (C) 2020 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

BOARD_VENDOR := xiaomi

DEVICE_PATH := device/xiaomi/haydn

# Inherit from proprietary files
include vendor/xiaomi/haydn/BoardConfigVendor.mk

# Architecture
TARGET_ARCH := arm64
TARGET_ARCH_VARIANT := armv8-a
TARGET_CPU_ABI := arm64-v8a
TARGET_CPU_ABI2 :=
TARGET_CPU_VARIANT := generic
TARGET_CPU_VARIANT_RUNTIME := kryo385

TARGET_2ND_ARCH := arm
TARGET_2ND_ARCH_VARIANT := armv8-a
TARGET_2ND_CPU_ABI := armeabi-v7a
TARGET_2ND_CPU_ABI2 := armeabi
TARGET_2ND_CPU_VARIANT := generic
TARGET_2ND_CPU_VARIANT_RUNTIME := kryo385

# Bootloader
TARGET_BOOTLOADER_BOARD_NAME := lahaina
TARGET_NO_BOOTLOADER := true

# Kernel
BOARD_KERNEL_BASE := 0x00000000
BOARD_KERNEL_IMAGE_NAME := Image
BOARD_KERNEL_PAGESIZE := 4096
BOARD_KERNEL_SEPARATED_DTBO := true
BOARD_BOOT_HEADER_VERSION := 3
BOARD_MKBOOTIMG_ARGS += --header_version $(BOARD_BOOT_HEADER_VERSION)
KERNEL_LD := LD=ld.lld
TARGET_KERNEL_ADDITIONAL_FLAGS := DTC_EXT=$(shell pwd)/prebuilts/misc/linux-x86/dtc/dtc LLVM=1
TARGET_KERNEL_CLANG_COMPILE := true
TARGET_KERNEL_CONFIG := vendor/haydn-qgki_defconfig
TARGET_KERNEL_SOURCE := kernel/xiaomi/haydn
BOARD_KERNEL_CMDLINE += androidboot.console=ttyMSM0 androidboot.hardware=qcom androidboot.memcg=1 androidboot.usbcontroller=a600000.dwc3 cgroup.memory=nokmem,nosocket console=ttyMSM0,115200n8 loop.max_part=7 msm_rtb.filter=0x237 service_locator.enable=1 swiotlb=0 pcie_ports=compat iptable_raw.raw_before_defrag=1 ip6table_raw.raw_before_defrag=1 video=vfb:640x400,bpp=32,memsize=3072000
BOARD_KERNEL_CMDLINE += androidboot.selinux=permissive

# Platform
TARGET_BOARD_PLATFORM := lahaina

# QCOM
BOARD_USES_QCOM_HARDWARE := true

# Recovery
BOARD_INCLUDE_DTB_IN_BOOTIMG := true
BOARD_USES_RECOVERY_AS_BOOT := true

# Screen density
TARGET_SCREEN_DENSITY := 440
