#include <com_testJni_Util.h>

JNIEXPORT jstring JNICALL Java_com_testJni_Util_print
        (JNIEnv *env, jclass thiz){
    return (*env)->NewStringUTF(env,"hello world");
}