//
// Created by maike on 2024/10/31.
//

#include "DeviceInfoJNI.h"

JNIEXPORT jstring JNICALL Java_com_tuchengmen_deviceguardians_DeviceInfoJNI_getAndroidId(JNIEnv* env, jobject obj) {
    jclass deviceInfoClass = env->GetObjectClass(obj);
    jmethodID getAndroidIdMethod = env->GetMethodID(deviceInfoClass, "getAndroidId", "()Ljava/lang/String;");
    jstring androidId = (jstring) env->CallObjectMethod(obj, getAndroidIdMethod);
    return androidId;
}

JNIEXPORT jstring JNICALL Java_com_tuchengmen_deviceguardians_DeviceInfoJNI_getDeviceModel(JNIEnv* env, jobject obj) {
    jclass deviceInfoClass = env->GetObjectClass(obj);
    jmethodID getDeviceModelMethod = env->GetMethodID(deviceInfoClass, "getDeviceModel", "()Ljava/lang/String;");
    jstring deviceModel = (jstring) env->CallObjectMethod(obj, getDeviceModelMethod);
    return deviceModel;
}

JNIEXPORT jstring JNICALL Java_com_tuchengmen_deviceguardians_DeviceInfoJNI_getManufacturer(JNIEnv* env, jobject obj) {
    jclass deviceInfoClass = env->GetObjectClass(obj);
    jmethodID getManufacturerMethod = env->GetMethodID(deviceInfoClass, "getManufacturer", "()Ljava/lang/String;");
    jstring manufacturer = (jstring) env->CallObjectMethod(obj, getManufacturerMethod);
    return manufacturer;
}

JNIEXPORT jint JNICALL Java_com_tuchengmen_deviceguardians_DeviceInfoJNI_getOsVersion(JNIEnv* env, jobject obj) {
    jclass deviceInfoClass = env->GetObjectClass(obj);
    jmethodID getOsVersionMethod = env->GetMethodID(deviceInfoClass, "getOsVersion", "()I");
    jint osVersion = env->CallIntMethod(obj, getOsVersionMethod);
    return osVersion;
}
