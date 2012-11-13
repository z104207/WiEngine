/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_actions_MoveBy */

#ifndef _Included_com_wiyun_engine_actions_MoveBy
#define _Included_com_wiyun_engine_actions_MoveBy
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_wiyun_engine_actions_MoveBy
 * Method:    nativeInit
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_actions_MoveBy_nativeInit
  (JNIEnv *, jobject, jfloat, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_actions_MoveBy
 * Method:    setPinPoint
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_actions_MoveBy_setPinPoint
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_actions_MoveBy
 * Method:    nativeGetPinPoint
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_actions_MoveBy_nativeGetPinPoint
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_actions_MoveBy
 * Method:    clearPinPoint
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_actions_MoveBy_clearPinPoint
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_actions_MoveBy
 * Method:    setPinAngleDelta
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_actions_MoveBy_setPinAngleDelta
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_actions_MoveBy
 * Method:    getPinAngleDelta
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_actions_MoveBy_getPinAngleDelta
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif