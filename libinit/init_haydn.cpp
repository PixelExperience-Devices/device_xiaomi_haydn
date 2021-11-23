/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"


static const variant_info_t haydnin_info = {
    .hwc_value = "IN",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "haydnin",
    .marketname = "Mi 11X Pro",
    .model = "M2012K11I",
    .name = "haydn_in",
    .build_fingerprint = "Xiaomi/haydn_in/haydnin:11/RKQ1.201112.002/V12.5.4.0.RKKINXM:user/release-keys",

    .nfc = false,
};

static const variant_info_t haydnglobal_info = {
    .hwc_value = "GL",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "haydn",
    .marketname = "Mi 11i",
    .model = "M2012K11G",
    .name = "haydn_global",
    .build_fingerprint = "Xiaomi/haydn_global/haydn:11/RKQ1.201112.002/V12.5.2.0.RKKMIXM:user/release-keys",

    .nfc = true,
};

static const variant_info_t haydnpro_info = {
    .hwc_value = "",
    .sku_value = "haydnpro",

    .brand = "Redmi",
    .device = "haydn",
    .marketname = "Redmi K40 Pro+",
    .model = "M2012K11C",
    .name = "haydnpro",
    .build_fingerprint = "Redmi/haydnpro/haydn:11/RKQ1.201112.002/V12.5.5.0.RKKCNXM:user/release-keys",

    .nfc = true,
};

static const variant_info_t haydn_info = {
    .hwc_value = "",
    .sku_value = "haydn",

    .brand = "Redmi",
    .device = "haydn",
    .marketname = "Redmi K40 Pro",
    .model = "M2012K11C",
    .name = "haydn",
    .build_fingerprint = "Redmi/haydn/haydn:11/RKQ1.201112.002/V12.5.5.0.RKKCNXM:user/release-keys",

    .nfc = true,
};

static const std::vector<variant_info_t> variants = {
    haydnin_info,
    haydnglobal_info,
    haydnpro_info,
    haydn_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}
