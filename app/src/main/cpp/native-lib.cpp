//
// Created by Roman.
//

#include <jni.h>

extern "C" {
    JNIEXPORT jstring JNICALL
    Java_info_androidsecurity_helloworld_MainActivity_invokeNativeFunction(JNIEnv *env, jobject instance) {
        return env->NewStringUTF("V293ISBob3cgY3VyaW91cyBlaD8=");
    }
}