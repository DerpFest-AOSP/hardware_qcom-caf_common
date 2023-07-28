ifeq ($(call my-dir),$(call project-path-for,qcom-audio))
include $(call first-makefiles-under,$(call my-dir))
endif
