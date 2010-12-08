LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

GST_MAJORMINOR:= 0.10

LOCAL_SRC_FILES:= \
    gstadapter.c	\
    gstbasesink.c	\
    gstbasesrc.c	\
    gstbasetransform.c	\
    gstbitreader.c	\
    gstbytereader.c	\
    gstbytewriter.c	\
    gstcollectpads.c	\
    gstdataqueue.c	\
    gstpushsrc.c	\
    gsttypefindhelper.c	

LOCAL_SHARED_LIBRARIES := \
    libgstreamer-0.10       \
    libglib-2.0             \
    libgthread-2.0          \
    libgmodule-2.0          \
    libgobject-2.0

LOCAL_MODULE:= libgstbase-$(GST_MAJORMINOR)

#LOCAL_TOP_PATH := $(LOCAL_PATH)/../../../..

LOCAL_C_INCLUDES := 			\
    $(LOCAL_PATH)   			\
    external/gstreamer       		\
    external/gstreamer/android   	\
    external/gstreamer/gst		\
    external/gstreamer/gst/android	\
    external/gstreamer/libs 		\
    external/glib   			\
    external/glib/android   		\
    external/glib/glib   		\
    external/glib/gmodule   		\
    external/glib/gobject  		\
    external/glib/gthread

LOCAL_CFLAGS := \
    -DHAVE_CONFIG_H			

LOCAL_PRELINK_MODULE := false
include $(BUILD_SHARED_LIBRARY)
