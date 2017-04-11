#include "com_zzz_jniproject_MainActivity.h"
JNIEXPORT jstring JNICALL Java_com_zzz_jniproject_MainActivity_testJni
        (JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env,"hello world");
}