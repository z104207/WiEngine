/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_chipmunk_RotaryLimitJoint */

#ifndef _Included_com_wiyun_engine_chipmunk_RotaryLimitJoint
#define _Included_com_wiyun_engine_chipmunk_RotaryLimitJoint
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_wiyun_engine_chipmunk_RotaryLimitJoint
 * Method:    init
 * Signature: (Lcom/wiyun/engine/chipmunk/Body;Lcom/wiyun/engine/chipmunk/Body;FF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_chipmunk_RotaryLimitJoint_init
  (JNIEnv *, jobject, jobject, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_chipmunk_RotaryLimitJoint
 * Method:    getMin
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_chipmunk_RotaryLimitJoint_getMin
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_chipmunk_RotaryLimitJoint
 * Method:    setMin
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_chipmunk_RotaryLimitJoint_setMin
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_chipmunk_RotaryLimitJoint
 * Method:    getMax
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_chipmunk_RotaryLimitJoint_getMax
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_chipmunk_RotaryLimitJoint
 * Method:    setMax
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_chipmunk_RotaryLimitJoint_setMax
  (JNIEnv *, jobject, jfloat);

#ifdef __cplusplus
}
#endif
#endif
