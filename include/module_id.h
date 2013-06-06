/* Copyright (c) 2013 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

/* Module IDs for Chrome EC */

#ifndef __CROS_EC_MODULE_ID_H
#define __CROS_EC_MODULE_ID_H

#include "common.h"

enum module_id {
	MODULE_ADC,
	MODULE_CHARGER,
	MODULE_CHIPSET,
	MODULE_CLOCK,
	MODULE_COMMAND,
	MODULE_DMA,
	MODULE_EXTPOWER,
	MODULE_GPIO,
	MODULE_HOOK,
	MODULE_HOST_COMMAND,
	MODULE_HOST_EVENT,
	MODULE_I2C,
	MODULE_KEYBOARD,
	MODULE_KEYBOARD_SCAN,
	MODULE_LIGHTBAR,
	MODULE_LPC,
	MODULE_PECI,
	MODULE_PMU,
	MODULE_PORT80,
	MODULE_POWER_LED,
	MODULE_PWM_FAN,
	MODULE_PWM_KBLIGHT,
	MODULE_PWM_LED,
	MODULE_SPI,
	MODULE_SWITCH,
	MODULE_SYSTEM,
	MODULE_TASK,
	MODULE_THERMAL,
	MODULE_UART,
	MODULE_USB,
	MODULE_USB_PD,
	MODULE_USB_PORT_POWER,
	MODULE_USB_SWITCH,
	MODULE_VBOOT,

	/* Module count; not an actual module */
	MODULE_COUNT
};

#endif
