#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_tuchengmen_deviceguardians_NativeLib_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT jstring JNICALL
Java_com_tuchengmen_deviceguardians_NativeLib_generateDeviceId(JNIEnv *env, jobject thiz,
                                                               jstring android_id,
                                                               jstring device_model,
                                                               jstring manufacturer,
                                                               jint os_version) {
    // TODO: implement generateDeviceId()
}
extern "C"
JNIEXPORT jint JNICALL
Java_com_tuchengmen_deviceguardians_NativeLib_calculateRiskScore(JNIEnv *env, jobject thiz,
                                                                 jboolean android_id_changed,
                                                                 jboolean ip_changed,
                                                                 jboolean root_detected) {
    // TODO: implement calculateRiskScore()
}