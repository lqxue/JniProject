LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := print
LOCAL_SRC_FILES := testJni.c
include $(BUILD_SHARED_LIBRARY)