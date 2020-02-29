#include "jni.h"
jstring Java_com_testJni_MainActivity_print(JNIEnv *env, jobject thiz){
    return (*env)->NewStringUTF(env,"hello world");
}