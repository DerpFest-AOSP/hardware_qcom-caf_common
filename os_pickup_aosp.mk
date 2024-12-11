# This file guards most of hardware/qcom/* from
# being used on devices which use hardware/qcom-caf/*

LOCAL_PATH := $(call my-dir)

ifneq ($(BOARD_USES_QCOM_HARDWARE),true)
include $(call first-makefiles-under,$(LOCAL_PATH))
endif
