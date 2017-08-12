#include <jni.h>

extern "C"{
#include "test1.h"
#include <SM2_ENC.h>
#include "gloable.h"
}


extern "C"
JNIEXPORT jint JNICALL
Java_platform_zonetry_com_smproject_JniUtil_getAddResult(JNIEnv *env, jclass type, jint a, jint b) {
    int a_=a;
    int b_=b;
#ifdef Debug
    LOGI("我在hi_jni.cpp里面和你撩呢!");
    LOGE("MainActivity 底层test1.c:init()");
# endif
    return addAB(a_, b_);
}

extern "C"
JNIEXPORT jstring JNICALL
Java_platform_zonetry_com_smproject_JniUtil_stringFromJNI(
        JNIEnv *env, jobject instance) {
    return env->NewStringUTF("Hello from jni C++");
}


extern "C"
JNIEXPORT void JNICALL
Java_platform_zonetry_com_smproject_JniUtil_generatePubKeyBypriKey(JNIEnv *env, jclass type,
                                                                   jstring priKey_, jstring pubKey_) {
    const char *priKey = env->GetStringUTFChars(priKey_, 0);
    const char *pubKey = env->GetStringUTFChars(pubKey_, 0);

    env->ReleaseStringUTFChars(priKey_, priKey);
    env->ReleaseStringUTFChars(pubKey_, pubKey);

    unsigned char *upriKey = (unsigned char *) (const_cast<char *>(priKey));
    unsigned char *upubKey = (unsigned char *) (const_cast<char *>(pubKey));
    SM2_KeyGeneration_w(upriKey, upubKey);
}