# Makefile.am for building a BEEBS benchmark
#
# Copyright (C) 2014 Embecosm Limited and University of Bristol
# Copyright (C) 2019 SiFive, Inc
#
# This file is part of the Bristol/Embecosm Embedded Benchmark Suite.
#
# Contributor: Palmer Dabbelt <palmer@sifive.com>
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

bin_PROGRAMS=nettle-aes
nettle_aes_SOURCES=aes-decrypt-internal.c \
        aes-decrypt.c \
        aes-encrypt-internal.c \
        aes-encrypt-table.c \
        aes-encrypt.c \
        aes-invert-internal.c \
        aes-set-decrypt-key.c \
        aes-set-encrypt-key.c \
        aes-set-key-internal.c \
        aes128-meta.c \
        aes128-set-decrypt-key.c \
        aes128-set-encrypt-key.c \
	benchmark.c

include $(top_srcdir)/src/common.mk.am

nettle_aes_SOURCES += ${platform_src}
