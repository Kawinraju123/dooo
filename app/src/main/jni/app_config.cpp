#include <jni.h>
#include <string>


std::string SERVER_URL = "http://kawin.tech";  //Copy API SERVER URL From Admin Panal->API Setting And Paste Here
std::string API_KEY = "seLZR7dHtEfWuXcF";  //Copy API KEY From Admin Panal->API Setting And Paste Here
std::string ONESIGNAL_APP_ID = "bba4260d-8028-446f-9505-237be3310340";  //Copy ONESIGNAL APP ID From Onesignal And Paste Here
bool allowVPN = true; // If false App Will Not Open In VPN
bool FLAG_SECURE = "false"; //If True No Screenshort, No Screen Recording in Application
bool allowRoot = "true"; // If false App Will Not Open In Rooted Device
std::string YOUTUBE_API_KEY = "AIzaSyBHzaf3e6U5z0NKEu3p5l0yQVwQPp7-2bs";
bool unity_ad_testMode = "false";





extern "C" JNIEXPORT jstring JNICALL
// Change "com_dooo_android" with your package name. // I.e "com_package_name" // DO NOT CHANGE OTHER THINGS
Java_com_dooo_android_AppConfig_getApiServerUrl(
        JNIEnv* env,
        jclass clazz) {
    return env->NewStringUTF(SERVER_URL.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
// Change "com_dooo_android" with your package name. // I.e "com_package_name" // DO NOT CHANGE OTHER THINGS
Java_com_dooo_android_AppConfig_getApiKey(
        JNIEnv* env,
jclass clazz) {
return env->NewStringUTF(API_KEY.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
// Change "com_dooo_android" with your package name. // I.e "com_package_name" // DO NOT CHANGE OTHER THINGS
Java_com_dooo_android_AppConfig_getOnesignalAppID(
        JNIEnv* env,
        jclass clazz) {
    return env->NewStringUTF(ONESIGNAL_APP_ID.c_str());
}

extern "C" JNIEXPORT jboolean JNICALL
// Change "com_dooo_android" with your package name. // I.e "com_package_name" // DO NOT CHANGE OTHER THINGS
Java_com_dooo_android_AppConfig_allowVPNStatus(JNIEnv *env, jclass clazz) {
    return allowVPN;
}

extern "C" JNIEXPORT jboolean JNICALL
// Change "com_dooo_android" with your package name. // I.e "com_package_name" // DO NOT CHANGE OTHER THINGS
Java_com_dooo_android_AppConfig_flagSecureStatus(JNIEnv *env, jclass clazz) {
    return FLAG_SECURE;
}

extern "C" JNIEXPORT jboolean JNICALL
// Change "com_dooo_android" with your package name. // I.e "com_package_name" // DO NOT CHANGE OTHER THINGS
Java_com_dooo_android_AppConfig_allowRootStatus(JNIEnv *env, jclass clazz) {
    return allowRoot;
}

extern "C" JNIEXPORT jstring JNICALL
// Change "com_dooo_android" with your package name. // I.e "com_package_name" // DO NOT CHANGE OTHER THINGS
Java_com_dooo_android_AppConfig_getYoutubeApiKey(
        JNIEnv* env,
        jclass clazz) {
    return env->NewStringUTF(YOUTUBE_API_KEY.c_str());
}

extern "C" JNIEXPORT jboolean JNICALL
// Change "com_dooo_android" with your package name. // I.e "com_package_name" // DO NOT CHANGE OTHER THINGS
Java_com_dooo_android_AppConfig_unityAdTestModeStatus(JNIEnv *env, jclass clazz) {
    return unity_ad_testMode;
}
