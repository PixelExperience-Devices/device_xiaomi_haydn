/*
 *
 *  Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *  Not a Contribution, Apache license notifications and license are retained
 *  for attribution purposes only.
 *
 * Copyright (C) 2012 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _BDROID_BUILDCFG_H
#define _BDROID_BUILDCFG_H
#include <stdint.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif
int property_get(const char *key, char *value, const char *default_value);
#ifdef __cplusplus
}
#endif

inline const char* BtmGetDefaultName()
{
	char region[92];
	char sku[92];
	property_get("ro.boot.hwc", region, "");
	property_get("ro.boot.hardware.sku", sku, "");

	if (!strcmp("IN", region)) {
		return "Mi 11X Pro";
	}
	if (!strcmp("CN", region)) {
        if (!strcmp("haydnpro", sku)) {
            return "Redmi K40 Pro+";
        }
        return "Redmi K40 Pro";
    }
    return "Mi 11i";
}

#define BTM_DEF_LOCAL_NAME BtmGetDefaultName()
// Disables read remote device feature
#define MAX_ACL_CONNECTIONS   16
#define MAX_L2CAP_CHANNELS    32
#define BLE_VND_INCLUDED   TRUE
#define GATT_MAX_PHY_CHANNEL  10
#define AVDT_NUM_SEPS 35

#endif
