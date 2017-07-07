#include <jni.h>
#include <string>

extern "C" {

    JNIEXPORT jbyte JNICALL
    Java_com_dh_win_iaccount_JNI_JniNativeMethods_YihuoIndentify(JNIEnv *env, jobject instance,
                                                                 jbyteArray b_) {
        jbyte *b = env->GetByteArrayElements(b_, NULL);
        jbyte j = b[0];
        for (int i = 1; i < (sizeof(b_) / sizeof(b[0])); i++)//求数组长度
        {
            j = j ^ b[i];
        }
        return j;
    }

}