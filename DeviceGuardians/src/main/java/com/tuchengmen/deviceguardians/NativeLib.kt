package com.tuchengmen.deviceguardians

class NativeLib {

    /**
     * A native method that is implemented by the 'deviceguardians' native library,
     * which is packaged with this application.
     */
    external fun stringFromJNI(): String

    external fun generateDeviceId(
        androidId: String?,
        deviceModel: String?,
        manufacturer: String?,
        osVersion: Int
    ): String?

    external fun calculateRiskScore(
        androidIdChanged: Boolean,
        ipChanged: Boolean,
        rootDetected: Boolean
    ): Int

    // 声明本地方法
    external fun getAndroidId(): String?
    external fun getDeviceModel(): String?
    external fun getManufacturer(): String?
    external fun getOsVersion(): Int

    companion object {
        // Used to load the 'deviceguardians' library on application startup.
        init {
            System.loadLibrary("deviceguardians")
        }
    }
}