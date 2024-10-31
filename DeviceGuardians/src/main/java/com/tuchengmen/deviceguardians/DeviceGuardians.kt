package com.tuchengmen.deviceguardians

import android.app.Application

class DeviceGuardians private constructor(builder: Builder){

    inner class Builder constructor(var application: Application) {

        fun build(): DeviceGuardians {
            return DeviceGuardians(this)
        }
    }
}