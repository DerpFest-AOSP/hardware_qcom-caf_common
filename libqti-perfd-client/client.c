/*
 * Copyright (C) 2021-2024 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#define LOG_TAG "libqti-perfd-client"

#include <log/log.h>
#include <stdint.h>

void perf_event(int arg1, char* arg2, int arg3, int* arg4) {
    ALOGI("perf_event: arg1: %d, arg2: %s, arg3: %d, arg4: %d", arg1, arg2, arg3, *arg4);
}

int perf_get_feedback(int arg1, char* arg2) {
    ALOGI("perf_get_feedback: arg1: %d, arg2: %s", arg1, arg2);
    return 233;
}

int perf_get_feedback_extn(int arg1, char* arg2, unsigned int arg3, char* arg4) {
    ALOGI("perf_get_feedback_extn: arg1: %d, arg2: %s, arg3: %u, arg4: %s", arg1, arg2, arg3, arg4);
    return 233;
}

void perf_hint(int arg1, char* arg2, int arg3, int arg4) {
    ALOGI("perf_hint: arg1: %d, arg2: %s, arg3: %d, arg4: %d", arg1, arg2, arg3, arg4);
}

int perf_lock_acq(int handle, int duration, int list[], int numArgs) {
    ALOGI("perf_lock_acq: handle: %d, duration: %d, list[0]: %d, numArgs: %d", handle, duration,
          list[0], numArgs);
    return handle ?: 233;
}

void perf_lock_cmd(int arg1) {
    ALOGI("perf_lock_cmd: arg1: %d", arg1);
}

int perf_lock_rel(int handle) {
    ALOGI("perf_lock_rel: handle: %d", handle);
    return handle ?: 233;
}

int perf_lock_use_profile(int handle, int profile) {
    ALOGI("perf_lock_use_profile: handle: %d, profile: %d", handle, profile);
    return handle ?: 233;
}

void perf_wait_get_prop(char* arg1, char* arg2) {
    ALOGI("perf_wait_get_prop: arg1: %s, arg2: %s", arg1, arg2);
}
