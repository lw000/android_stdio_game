LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := lib_common_net_static

LOCAL_MODULE_FILENAME := libcommon_net

LOCAL_SRC_FILES := ../NetMessage.cpp \
                   ../Net.cpp \
                   ../Parser.cpp \

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../

include $(BUILD_STATIC_LIBRARY)

