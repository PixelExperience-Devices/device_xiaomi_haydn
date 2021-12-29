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
