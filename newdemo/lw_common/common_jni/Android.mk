LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := lib_common_static

LOCAL_MODULE_FILENAME := libcommon

LOCAL_SRC_FILES := ../Platform.cpp \
                   ../Game.cpp

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../

include $(BUILD_STATIC_LIBRARY)

