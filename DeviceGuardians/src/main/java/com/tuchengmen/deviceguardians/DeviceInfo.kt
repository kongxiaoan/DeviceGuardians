package com.tuchengmen.deviceguardians

import android.annotation.SuppressLint
import android.content.Context
import android.os.Build
import android.provider.Settings


class DeviceInfo(private var context: Context) {

    // 获取 Android ID
    @SuppressLint("HardwareIds")
    fun getAndroidId(): String {
        return Settings.Secure.getString(context!!.contentResolver, Settings.Secure.ANDROID_ID)
    }

    // 获取设备型号
    fun getDeviceModel(): String {
        return Build.MODEL
    }

    // 获取制造商
    fun getManufacturer(): String {
        return Build.MANUFACTURER
    }

    // 获取 Android 版本号
    fun getOsVersion(): Int {
        return Build.VERSION.SDK_INT
    }
}