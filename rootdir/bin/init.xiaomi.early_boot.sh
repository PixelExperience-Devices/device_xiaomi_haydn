#! /vendor/bin/sh
function set_per_app_memcg() {
    MemTotalStr=`cat /proc/meminfo | grep MemTotal`
    MemTotal=${MemTotalStr:16:8}
    threshold=`getprop persist.vendor.sys.per_app_memcg.threshold`

    if [ -n "$threshold" ]; then
        if [ $MemTotal -lt $threshold ]; then
            setprop persist.vendor.sys.per_app_memcg 1
        else
            setprop persist.vendor.sys.per_app_memcg 0
        fi
    fi
}
set_per_app_memcg
