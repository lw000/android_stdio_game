LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

$(call import-add-path,$(LOCAL_PATH)/../../cocos2d)
$(call import-add-path,$(LOCAL_PATH)/../../cocos2d/external)
$(call import-add-path,$(LOCAL_PATH)/../../cocos2d/cocos)
$(call import-add-path,$(LOCAL_PATH)/../../cocos2d/cocos/audio/include)

LOCAL_MODULE := lib_common_ui_static

LOCAL_MODULE_FILENAME := libcommonui

LOCAL_SRC_FILES := ../BaseSence.cpp \
                   ../BaseLayer.cpp

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../

LOCAL_STATIC_LIBRARIES := cocos2dx_static

include $(BUILD_STATIC_LIBRARY)