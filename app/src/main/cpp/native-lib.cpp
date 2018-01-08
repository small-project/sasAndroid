#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_id_co_sinergiadhikarya_sas_login_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
