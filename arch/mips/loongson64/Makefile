# SPDX-License-Identifier: GPL-2.0-only
#
# Makefile for Loongson-3 family machines
#
obj-$(CONFIG_MACH_LOONGSON64) += cop2-ex.o dma.o \
				setup.o init.o env.o time.o reset.o \
				clock.o constant_timer.o ec_wpce775l.o \
				platform.o loongson3-memset.o \
				loongson3-memcpy.o \

obj-$(CONFIG_SMP)	+= smp.o
obj-$(CONFIG_NUMA)	+= numa.o
obj-$(CONFIG_RS780_HPET) += hpet.o
obj-$(CONFIG_SUSPEND) += pm.o sleeper.o
obj-$(CONFIG_PCI_QUIRKS) += vbios_quirk.o
obj-$(CONFIG_CPU_LOONGSON3_CPUCFG_EMULATION) += cpucfg-emul.o
obj-$(CONFIG_SYSFS) += boardinfo.o
