//
// Created by maike on 2024/10/31.
//

#ifndef DEVICEGUARDIANS_DEVICEINFOJNI_H
#define DEVICEGUARDIANS_DEVICEINFOJNI_H

#include <jni.h>

extern "C" {
JNIEXPORT jstring JNICALL Java_com_tuchengmen_deviceguardians_DeviceInfoJNI_getAndroidId(JNIEnv* env, jobject obj);
JNIEXPORT jstring JNICALL Java_com_tuchengmen_deviceguardians_DeviceInfoJNI_getDeviceModel(JNIEnv* env, jobject obj);
JNIEXPORT jstring JNICALL Java_com_tuchengmen_deviceguardians_DeviceInfoJNI_getManufacturer(JNIEnv* env, jobject obj);
JNIEXPORT jint JNICALL Java_com_tuchengmen_deviceguardians_DeviceInfoJNI_getOsVersion(JNIEnv* env, jobject obj);
};

#endif //DEVICEGUARDIANS_DEVICEINFOJNI_H
