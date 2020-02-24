/*
 * pinctrl-tegra-io-pad.h: Provides constants for Tegra IO pads
 * 			   pinctrl bindings.
 *
 * Copyright (c) 2016-2017, NVIDIA CORPORATION.  All rights reserved.
 *
 * Author: Laxman Dewangan <ldewangan@nvidia.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef _DT_BINDINGS_PINCTRL_TEGRA_IO_PAD_H
#define _DT_BINDINGS_PINCTRL_TEGRA_IO_PAD_H

/* Power source voltage of IO pads. */
#if TEGRA_SDMMC_VERSION >= DT_VERSION_2
#define TEGRA_IO_PAD_VOLTAGE_1V8	0
#define TEGRA_IO_PAD_VOLTAGE_3V3	1
#endif
#define TEGRA_IO_PAD_VOLTAGE_1800000UV		0
#define TEGRA_IO_PAD_VOLTAGE_3300000UV		1

#endif

