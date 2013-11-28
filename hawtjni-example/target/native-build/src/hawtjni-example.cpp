/*******************************************************************************
 * Copyright (C) 2009-2011 FuseSource Corp.
 * 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *******************************************************************************/
#include "hawtjni-example.h"
#include "hawtjni.h"
#include "hawtjni-example_structs.h"
#include "hawtjni-example_stats.h"

#define Example_NATIVE(func) Java_test_Example_##func

extern "C" JNIEXPORT void JNICALL Example_NATIVE(callmeback)(JNIEnv *env, jclass that, jlong arg0);
JNIEXPORT void JNICALL Example_NATIVE(callmeback)
	(JNIEnv *env, jclass that, jlong arg0)
{
	Example_NATIVE_ENTER(env, that, Example_callmeback_FUNC);
	callmeback((void (*)(int))(intptr_t)arg0);
	Example_NATIVE_EXIT(env, that, Example_callmeback_FUNC);
}

extern "C" JNIEXPORT jlong JNICALL Example_NATIVE(char_1add)(JNIEnv *env, jclass that, jlong arg0, jint arg1);
JNIEXPORT jlong JNICALL Example_NATIVE(char_1add)
	(JNIEnv *env, jclass that, jlong arg0, jint arg1)
{
	jlong rc = 0;
	Example_NATIVE_ENTER(env, that, Example_char_1add_FUNC);
	rc = (intptr_t)(char *)char_add((char *)(intptr_t)arg0, arg1);
	Example_NATIVE_EXIT(env, that, Example_char_1add_FUNC);
	return rc;
}

extern "C" JNIEXPORT jlong JNICALL Example_NATIVE(foo_1add)(JNIEnv *env, jclass that, jlong arg0, jint arg1);
JNIEXPORT jlong JNICALL Example_NATIVE(foo_1add)
	(JNIEnv *env, jclass that, jlong arg0, jint arg1)
{
	jlong rc = 0;
	Example_NATIVE_ENTER(env, that, Example_foo_1add_FUNC);
	rc = (intptr_t)(struct foo *)foo_add((struct foo *)(intptr_t)arg0, arg1);
	Example_NATIVE_EXIT(env, that, Example_foo_1add_FUNC);
	return rc;
}

extern "C" JNIEXPORT jlong JNICALL Example_NATIVE(foowork)(JNIEnv *env, jclass that, jlongArray arg0, jint arg1);
JNIEXPORT jlong JNICALL Example_NATIVE(foowork)
	(JNIEnv *env, jclass that, jlongArray arg0, jint arg1)
{
	jlong *lparg0=NULL;
	jlong rc = 0;
	Example_NATIVE_ENTER(env, that, Example_foowork_FUNC);
	if (arg0) if ((lparg0 = env->GetLongArrayElements(arg0, NULL)) == NULL) goto fail;
	rc = (jlong)foowork((struct foo **)lparg0, arg1);
fail:
	if (arg0 && lparg0) env->ReleaseLongArrayElements(arg0, lparg0, 0);
	Example_NATIVE_EXIT(env, that, Example_foowork_FUNC);
	return rc;
}

extern "C" JNIEXPORT void JNICALL Example_NATIVE(free)(JNIEnv *env, jclass that, jlong arg0);
JNIEXPORT void JNICALL Example_NATIVE(free)
	(JNIEnv *env, jclass that, jlong arg0)
{
	Example_NATIVE_ENTER(env, that, Example_free_FUNC);
	free((void *)(intptr_t)arg0);
	Example_NATIVE_EXIT(env, that, Example_free_FUNC);
}

extern "C" JNIEXPORT void JNICALL Example_NATIVE(init)(JNIEnv *env, jclass that)
{
	env->SetStaticIntField(that, env->GetStaticFieldID(that, "O_RDONLY", "I"), (jint)O_RDONLY);
	env->SetStaticIntField(that, env->GetStaticFieldID(that, "O_WRONLY", "I"), (jint)O_WRONLY);
	env->SetStaticIntField(that, env->GetStaticFieldID(that, "O_RDWR", "I"), (jint)O_RDWR);
   return;
}
extern "C" JNIEXPORT jlong JNICALL Example_NATIVE(malloc)(JNIEnv *env, jclass that, jlong arg0);
JNIEXPORT jlong JNICALL Example_NATIVE(malloc)
	(JNIEnv *env, jclass that, jlong arg0)
{
	jlong rc = 0;
	Example_NATIVE_ENTER(env, that, Example_malloc_FUNC);
	rc = (intptr_t)(void *)malloc((size_t)arg0);
	Example_NATIVE_EXIT(env, that, Example_malloc_FUNC);
	return rc;
}

extern "C" JNIEXPORT void JNICALL Example_NATIVE(memmove__JJJ)(JNIEnv *env, jclass that, jlong arg0, jlong arg1, jlong arg2);
JNIEXPORT void JNICALL Example_NATIVE(memmove__JJJ)
	(JNIEnv *env, jclass that, jlong arg0, jlong arg1, jlong arg2)
{
	Example_NATIVE_ENTER(env, that, Example_memmove__JJJ_FUNC);
	memmove((void *)(intptr_t)arg0, (const void *)(intptr_t)arg1, (size_t)arg2);
	Example_NATIVE_EXIT(env, that, Example_memmove__JJJ_FUNC);
}

extern "C" JNIEXPORT void JNICALL Example_NATIVE(memmove__JLtest_Example_00024bar_2J)(JNIEnv *env, jclass that, jlong arg0, jobject arg1, jlong arg2);
JNIEXPORT void JNICALL Example_NATIVE(memmove__JLtest_Example_00024bar_2J)
	(JNIEnv *env, jclass that, jlong arg0, jobject arg1, jlong arg2)
{
	struct foo _arg1, *lparg1=NULL;
	Example_NATIVE_ENTER(env, that, Example_memmove__JLtest_Example_00024bar_2J_FUNC);
	if (arg1) if ((lparg1 = getbarFields(env, arg1, &_arg1)) == NULL) goto fail;
	memmove((void *)(intptr_t)arg0, (const void *)lparg1, (size_t)arg2);
fail:
	Example_NATIVE_EXIT(env, that, Example_memmove__JLtest_Example_00024bar_2J_FUNC);
}

extern "C" JNIEXPORT void JNICALL Example_NATIVE(memmove__J_3BJ)(JNIEnv *env, jclass that, jlong arg0, jbyteArray arg1, jlong arg2);
JNIEXPORT void JNICALL Example_NATIVE(memmove__J_3BJ)
	(JNIEnv *env, jclass that, jlong arg0, jbyteArray arg1, jlong arg2)
{
	jbyte *lparg1=NULL;
	Example_NATIVE_ENTER(env, that, Example_memmove__J_3BJ_FUNC);
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg1) if ((lparg1 = (jbyte*)env->GetPrimitiveArrayCritical(arg1, NULL)) == NULL) goto fail;
	} else
#endif
	{
		if (arg1) if ((lparg1 = env->GetByteArrayElements(arg1, NULL)) == NULL) goto fail;
	}
	memmove((void *)(intptr_t)arg0, (const void *)lparg1, (size_t)arg2);
fail:
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg1 && lparg1) env->ReleasePrimitiveArrayCritical(arg1, lparg1, JNI_ABORT);
	} else
#endif
	{
		if (arg1 && lparg1) env->ReleaseByteArrayElements(arg1, lparg1, JNI_ABORT);
	}
	Example_NATIVE_EXIT(env, that, Example_memmove__J_3BJ_FUNC);
}

extern "C" JNIEXPORT void JNICALL Example_NATIVE(memmove__J_3CJ)(JNIEnv *env, jclass that, jlong arg0, jcharArray arg1, jlong arg2);
JNIEXPORT void JNICALL Example_NATIVE(memmove__J_3CJ)
	(JNIEnv *env, jclass that, jlong arg0, jcharArray arg1, jlong arg2)
{
	jchar *lparg1=NULL;
	Example_NATIVE_ENTER(env, that, Example_memmove__J_3CJ_FUNC);
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg1) if ((lparg1 = (jchar*)env->GetPrimitiveArrayCritical(arg1, NULL)) == NULL) goto fail;
	} else
#endif
	{
		if (arg1) if ((lparg1 = env->GetCharArrayElements(arg1, NULL)) == NULL) goto fail;
	}
	memmove((void *)(intptr_t)arg0, (const void *)lparg1, (size_t)arg2);
fail:
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg1 && lparg1) env->ReleasePrimitiveArrayCritical(arg1, lparg1, JNI_ABORT);
	} else
#endif
	{
		if (arg1 && lparg1) env->ReleaseCharArrayElements(arg1, lparg1, JNI_ABORT);
	}
	Example_NATIVE_EXIT(env, that, Example_memmove__J_3CJ_FUNC);
}

extern "C" JNIEXPORT void JNICALL Example_NATIVE(memmove__J_3DJ)(JNIEnv *env, jclass that, jlong arg0, jdoubleArray arg1, jlong arg2);
JNIEXPORT void JNICALL Example_NATIVE(memmove__J_3DJ)
	(JNIEnv *env, jclass that, jlong arg0, jdoubleArray arg1, jlong arg2)
{
	jdouble *lparg1=NULL;
	Example_NATIVE_ENTER(env, that, Example_memmove__J_3DJ_FUNC);
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg1) if ((lparg1 = (jdouble*)env->GetPrimitiveArrayCritical(arg1, NULL)) == NULL) goto fail;
	} else
#endif
	{
		if (arg1) if ((lparg1 = env->GetDoubleArrayElements(arg1, NULL)) == NULL) goto fail;
	}
	memmove((void *)(intptr_t)arg0, (const void *)lparg1, (size_t)arg2);
fail:
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg1 && lparg1) env->ReleasePrimitiveArrayCritical(arg1, lparg1, JNI_ABORT);
	} else
#endif
	{
		if (arg1 && lparg1) env->ReleaseDoubleArrayElements(arg1, lparg1, JNI_ABORT);
	}
	Example_NATIVE_EXIT(env, that, Example_memmove__J_3DJ_FUNC);
}

extern "C" JNIEXPORT void JNICALL Example_NATIVE(memmove__J_3FJ)(JNIEnv *env, jclass that, jlong arg0, jfloatArray arg1, jlong arg2);
JNIEXPORT void JNICALL Example_NATIVE(memmove__J_3FJ)
	(JNIEnv *env, jclass that, jlong arg0, jfloatArray arg1, jlong arg2)
{
	jfloat *lparg1=NULL;
	Example_NATIVE_ENTER(env, that, Example_memmove__J_3FJ_FUNC);
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg1) if ((lparg1 = (jfloat*)env->GetPrimitiveArrayCritical(arg1, NULL)) == NULL) goto fail;
	} else
#endif
	{
		if (arg1) if ((lparg1 = env->GetFloatArrayElements(arg1, NULL)) == NULL) goto fail;
	}
	memmove((void *)(intptr_t)arg0, (const void *)lparg1, (size_t)arg2);
fail:
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg1 && lparg1) env->ReleasePrimitiveArrayCritical(arg1, lparg1, JNI_ABORT);
	} else
#endif
	{
		if (arg1 && lparg1) env->ReleaseFloatArrayElements(arg1, lparg1, JNI_ABORT);
	}
	Example_NATIVE_EXIT(env, that, Example_memmove__J_3FJ_FUNC);
}

extern "C" JNIEXPORT void JNICALL Example_NATIVE(memmove__J_3IJ)(JNIEnv *env, jclass that, jlong arg0, jintArray arg1, jlong arg2);
JNIEXPORT void JNICALL Example_NATIVE(memmove__J_3IJ)
	(JNIEnv *env, jclass that, jlong arg0, jintArray arg1, jlong arg2)
{
	jint *lparg1=NULL;
	Example_NATIVE_ENTER(env, that, Example_memmove__J_3IJ_FUNC);
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg1) if ((lparg1 = (jint*)env->GetPrimitiveArrayCritical(arg1, NULL)) == NULL) goto fail;
	} else
#endif
	{
		if (arg1) if ((lparg1 = env->GetIntArrayElements(arg1, NULL)) == NULL) goto fail;
	}
	memmove((void *)(intptr_t)arg0, (const void *)lparg1, (size_t)arg2);
fail:
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg1 && lparg1) env->ReleasePrimitiveArrayCritical(arg1, lparg1, JNI_ABORT);
	} else
#endif
	{
		if (arg1 && lparg1) env->ReleaseIntArrayElements(arg1, lparg1, JNI_ABORT);
	}
	Example_NATIVE_EXIT(env, that, Example_memmove__J_3IJ_FUNC);
}

extern "C" JNIEXPORT void JNICALL Example_NATIVE(memmove__J_3JJ)(JNIEnv *env, jclass that, jlong arg0, jlongArray arg1, jlong arg2);
JNIEXPORT void JNICALL Example_NATIVE(memmove__J_3JJ)
	(JNIEnv *env, jclass that, jlong arg0, jlongArray arg1, jlong arg2)
{
	jlong *lparg1=NULL;
	Example_NATIVE_ENTER(env, that, Example_memmove__J_3JJ_FUNC);
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg1) if ((lparg1 = (jlong*)env->GetPrimitiveArrayCritical(arg1, NULL)) == NULL) goto fail;
	} else
#endif
	{
		if (arg1) if ((lparg1 = env->GetLongArrayElements(arg1, NULL)) == NULL) goto fail;
	}
	memmove((void *)(intptr_t)arg0, (const void *)lparg1, (size_t)arg2);
fail:
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg1 && lparg1) env->ReleasePrimitiveArrayCritical(arg1, lparg1, JNI_ABORT);
	} else
#endif
	{
		if (arg1 && lparg1) env->ReleaseLongArrayElements(arg1, lparg1, JNI_ABORT);
	}
	Example_NATIVE_EXIT(env, that, Example_memmove__J_3JJ_FUNC);
}

extern "C" JNIEXPORT void JNICALL Example_NATIVE(memmove__J_3SJ)(JNIEnv *env, jclass that, jlong arg0, jshortArray arg1, jlong arg2);
JNIEXPORT void JNICALL Example_NATIVE(memmove__J_3SJ)
	(JNIEnv *env, jclass that, jlong arg0, jshortArray arg1, jlong arg2)
{
	jshort *lparg1=NULL;
	Example_NATIVE_ENTER(env, that, Example_memmove__J_3SJ_FUNC);
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg1) if ((lparg1 = (jshort*)env->GetPrimitiveArrayCritical(arg1, NULL)) == NULL) goto fail;
	} else
#endif
	{
		if (arg1) if ((lparg1 = env->GetShortArrayElements(arg1, NULL)) == NULL) goto fail;
	}
	memmove((void *)(intptr_t)arg0, (const void *)lparg1, (size_t)arg2);
fail:
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg1 && lparg1) env->ReleasePrimitiveArrayCritical(arg1, lparg1, JNI_ABORT);
	} else
#endif
	{
		if (arg1 && lparg1) env->ReleaseShortArrayElements(arg1, lparg1, JNI_ABORT);
	}
	Example_NATIVE_EXIT(env, that, Example_memmove__J_3SJ_FUNC);
}

extern "C" JNIEXPORT void JNICALL Example_NATIVE(memmove__Ltest_Example_00024bar_2JJ)(JNIEnv *env, jclass that, jobject arg0, jlong arg1, jlong arg2);
JNIEXPORT void JNICALL Example_NATIVE(memmove__Ltest_Example_00024bar_2JJ)
	(JNIEnv *env, jclass that, jobject arg0, jlong arg1, jlong arg2)
{
	struct foo _arg0, *lparg0=NULL;
	Example_NATIVE_ENTER(env, that, Example_memmove__Ltest_Example_00024bar_2JJ_FUNC);
	if (arg0) if ((lparg0 = &_arg0) == NULL) goto fail;
	memmove((void *)lparg0, (const void *)(intptr_t)arg1, (size_t)arg2);
fail:
	if (arg0 && lparg0) setbarFields(env, arg0, lparg0);
	Example_NATIVE_EXIT(env, that, Example_memmove__Ltest_Example_00024bar_2JJ_FUNC);
}

extern "C" JNIEXPORT void JNICALL Example_NATIVE(memmove___3BJJ)(JNIEnv *env, jclass that, jbyteArray arg0, jlong arg1, jlong arg2);
JNIEXPORT void JNICALL Example_NATIVE(memmove___3BJJ)
	(JNIEnv *env, jclass that, jbyteArray arg0, jlong arg1, jlong arg2)
{
	jbyte *lparg0=NULL;
	Example_NATIVE_ENTER(env, that, Example_memmove___3BJJ_FUNC);
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg0) if ((lparg0 = (jbyte*)env->GetPrimitiveArrayCritical(arg0, NULL)) == NULL) goto fail;
	} else
#endif
	{
		if (arg0) if ((lparg0 = env->GetByteArrayElements(arg0, NULL)) == NULL) goto fail;
	}
	memmove((void *)lparg0, (const void *)(intptr_t)arg1, (size_t)arg2);
fail:
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg0 && lparg0) env->ReleasePrimitiveArrayCritical(arg0, lparg0, 0);
	} else
#endif
	{
		if (arg0 && lparg0) env->ReleaseByteArrayElements(arg0, lparg0, 0);
	}
	Example_NATIVE_EXIT(env, that, Example_memmove___3BJJ_FUNC);
}

extern "C" JNIEXPORT void JNICALL Example_NATIVE(memmove___3B_3CJ)(JNIEnv *env, jclass that, jbyteArray arg0, jcharArray arg1, jlong arg2);
JNIEXPORT void JNICALL Example_NATIVE(memmove___3B_3CJ)
	(JNIEnv *env, jclass that, jbyteArray arg0, jcharArray arg1, jlong arg2)
{
	jbyte *lparg0=NULL;
	jchar *lparg1=NULL;
	Example_NATIVE_ENTER(env, that, Example_memmove___3B_3CJ_FUNC);
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg0) if ((lparg0 = (jbyte*)env->GetPrimitiveArrayCritical(arg0, NULL)) == NULL) goto fail;
		if (arg1) if ((lparg1 = (jchar*)env->GetPrimitiveArrayCritical(arg1, NULL)) == NULL) goto fail;
	} else
#endif
	{
		if (arg0) if ((lparg0 = env->GetByteArrayElements(arg0, NULL)) == NULL) goto fail;
		if (arg1) if ((lparg1 = env->GetCharArrayElements(arg1, NULL)) == NULL) goto fail;
	}
	memmove((void *)lparg0, (const void *)lparg1, (size_t)arg2);
fail:
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg1 && lparg1) env->ReleasePrimitiveArrayCritical(arg1, lparg1, JNI_ABORT);
		if (arg0 && lparg0) env->ReleasePrimitiveArrayCritical(arg0, lparg0, 0);
	} else
#endif
	{
		if (arg1 && lparg1) env->ReleaseCharArrayElements(arg1, lparg1, JNI_ABORT);
		if (arg0 && lparg0) env->ReleaseByteArrayElements(arg0, lparg0, 0);
	}
	Example_NATIVE_EXIT(env, that, Example_memmove___3B_3CJ_FUNC);
}

extern "C" JNIEXPORT void JNICALL Example_NATIVE(memmove___3CJJ)(JNIEnv *env, jclass that, jcharArray arg0, jlong arg1, jlong arg2);
JNIEXPORT void JNICALL Example_NATIVE(memmove___3CJJ)
	(JNIEnv *env, jclass that, jcharArray arg0, jlong arg1, jlong arg2)
{
	jchar *lparg0=NULL;
	Example_NATIVE_ENTER(env, that, Example_memmove___3CJJ_FUNC);
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg0) if ((lparg0 = (jchar*)env->GetPrimitiveArrayCritical(arg0, NULL)) == NULL) goto fail;
	} else
#endif
	{
		if (arg0) if ((lparg0 = env->GetCharArrayElements(arg0, NULL)) == NULL) goto fail;
	}
	memmove((void *)lparg0, (const void *)(intptr_t)arg1, (size_t)arg2);
fail:
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg0 && lparg0) env->ReleasePrimitiveArrayCritical(arg0, lparg0, 0);
	} else
#endif
	{
		if (arg0 && lparg0) env->ReleaseCharArrayElements(arg0, lparg0, 0);
	}
	Example_NATIVE_EXIT(env, that, Example_memmove___3CJJ_FUNC);
}

extern "C" JNIEXPORT void JNICALL Example_NATIVE(memmove___3DJJ)(JNIEnv *env, jclass that, jdoubleArray arg0, jlong arg1, jlong arg2);
JNIEXPORT void JNICALL Example_NATIVE(memmove___3DJJ)
	(JNIEnv *env, jclass that, jdoubleArray arg0, jlong arg1, jlong arg2)
{
	jdouble *lparg0=NULL;
	Example_NATIVE_ENTER(env, that, Example_memmove___3DJJ_FUNC);
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg0) if ((lparg0 = (jdouble*)env->GetPrimitiveArrayCritical(arg0, NULL)) == NULL) goto fail;
	} else
#endif
	{
		if (arg0) if ((lparg0 = env->GetDoubleArrayElements(arg0, NULL)) == NULL) goto fail;
	}
	memmove((void *)lparg0, (const void *)(intptr_t)arg1, (size_t)arg2);
fail:
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg0 && lparg0) env->ReleasePrimitiveArrayCritical(arg0, lparg0, 0);
	} else
#endif
	{
		if (arg0 && lparg0) env->ReleaseDoubleArrayElements(arg0, lparg0, 0);
	}
	Example_NATIVE_EXIT(env, that, Example_memmove___3DJJ_FUNC);
}

extern "C" JNIEXPORT void JNICALL Example_NATIVE(memmove___3FJJ)(JNIEnv *env, jclass that, jfloatArray arg0, jlong arg1, jlong arg2);
JNIEXPORT void JNICALL Example_NATIVE(memmove___3FJJ)
	(JNIEnv *env, jclass that, jfloatArray arg0, jlong arg1, jlong arg2)
{
	jfloat *lparg0=NULL;
	Example_NATIVE_ENTER(env, that, Example_memmove___3FJJ_FUNC);
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg0) if ((lparg0 = (jfloat*)env->GetPrimitiveArrayCritical(arg0, NULL)) == NULL) goto fail;
	} else
#endif
	{
		if (arg0) if ((lparg0 = env->GetFloatArrayElements(arg0, NULL)) == NULL) goto fail;
	}
	memmove((void *)lparg0, (const void *)(intptr_t)arg1, (size_t)arg2);
fail:
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg0 && lparg0) env->ReleasePrimitiveArrayCritical(arg0, lparg0, 0);
	} else
#endif
	{
		if (arg0 && lparg0) env->ReleaseFloatArrayElements(arg0, lparg0, 0);
	}
	Example_NATIVE_EXIT(env, that, Example_memmove___3FJJ_FUNC);
}

extern "C" JNIEXPORT void JNICALL Example_NATIVE(memmove___3IJJ)(JNIEnv *env, jclass that, jintArray arg0, jlong arg1, jlong arg2);
JNIEXPORT void JNICALL Example_NATIVE(memmove___3IJJ)
	(JNIEnv *env, jclass that, jintArray arg0, jlong arg1, jlong arg2)
{
	jint *lparg0=NULL;
	Example_NATIVE_ENTER(env, that, Example_memmove___3IJJ_FUNC);
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg0) if ((lparg0 = (jint*)env->GetPrimitiveArrayCritical(arg0, NULL)) == NULL) goto fail;
	} else
#endif
	{
		if (arg0) if ((lparg0 = env->GetIntArrayElements(arg0, NULL)) == NULL) goto fail;
	}
	memmove((void *)lparg0, (const void *)(intptr_t)arg1, (size_t)arg2);
fail:
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg0 && lparg0) env->ReleasePrimitiveArrayCritical(arg0, lparg0, 0);
	} else
#endif
	{
		if (arg0 && lparg0) env->ReleaseIntArrayElements(arg0, lparg0, 0);
	}
	Example_NATIVE_EXIT(env, that, Example_memmove___3IJJ_FUNC);
}

extern "C" JNIEXPORT void JNICALL Example_NATIVE(memmove___3I_3BJ)(JNIEnv *env, jclass that, jintArray arg0, jbyteArray arg1, jlong arg2);
JNIEXPORT void JNICALL Example_NATIVE(memmove___3I_3BJ)
	(JNIEnv *env, jclass that, jintArray arg0, jbyteArray arg1, jlong arg2)
{
	jint *lparg0=NULL;
	jbyte *lparg1=NULL;
	Example_NATIVE_ENTER(env, that, Example_memmove___3I_3BJ_FUNC);
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg0) if ((lparg0 = (jint*)env->GetPrimitiveArrayCritical(arg0, NULL)) == NULL) goto fail;
		if (arg1) if ((lparg1 = (jbyte*)env->GetPrimitiveArrayCritical(arg1, NULL)) == NULL) goto fail;
	} else
#endif
	{
		if (arg0) if ((lparg0 = env->GetIntArrayElements(arg0, NULL)) == NULL) goto fail;
		if (arg1) if ((lparg1 = env->GetByteArrayElements(arg1, NULL)) == NULL) goto fail;
	}
	memmove((void *)lparg0, (const void *)lparg1, (size_t)arg2);
fail:
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg1 && lparg1) env->ReleasePrimitiveArrayCritical(arg1, lparg1, JNI_ABORT);
		if (arg0 && lparg0) env->ReleasePrimitiveArrayCritical(arg0, lparg0, 0);
	} else
#endif
	{
		if (arg1 && lparg1) env->ReleaseByteArrayElements(arg1, lparg1, JNI_ABORT);
		if (arg0 && lparg0) env->ReleaseIntArrayElements(arg0, lparg0, 0);
	}
	Example_NATIVE_EXIT(env, that, Example_memmove___3I_3BJ_FUNC);
}

extern "C" JNIEXPORT void JNICALL Example_NATIVE(memmove___3JJJ)(JNIEnv *env, jclass that, jlongArray arg0, jlong arg1, jlong arg2);
JNIEXPORT void JNICALL Example_NATIVE(memmove___3JJJ)
	(JNIEnv *env, jclass that, jlongArray arg0, jlong arg1, jlong arg2)
{
	jlong *lparg0=NULL;
	Example_NATIVE_ENTER(env, that, Example_memmove___3JJJ_FUNC);
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg0) if ((lparg0 = (jlong*)env->GetPrimitiveArrayCritical(arg0, NULL)) == NULL) goto fail;
	} else
#endif
	{
		if (arg0) if ((lparg0 = env->GetLongArrayElements(arg0, NULL)) == NULL) goto fail;
	}
	memmove((void *)lparg0, (const void *)(intptr_t)arg1, (size_t)arg2);
fail:
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg0 && lparg0) env->ReleasePrimitiveArrayCritical(arg0, lparg0, 0);
	} else
#endif
	{
		if (arg0 && lparg0) env->ReleaseLongArrayElements(arg0, lparg0, 0);
	}
	Example_NATIVE_EXIT(env, that, Example_memmove___3JJJ_FUNC);
}

extern "C" JNIEXPORT void JNICALL Example_NATIVE(memmove___3SJJ)(JNIEnv *env, jclass that, jshortArray arg0, jlong arg1, jlong arg2);
JNIEXPORT void JNICALL Example_NATIVE(memmove___3SJJ)
	(JNIEnv *env, jclass that, jshortArray arg0, jlong arg1, jlong arg2)
{
	jshort *lparg0=NULL;
	Example_NATIVE_ENTER(env, that, Example_memmove___3SJJ_FUNC);
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg0) if ((lparg0 = (jshort*)env->GetPrimitiveArrayCritical(arg0, NULL)) == NULL) goto fail;
	} else
#endif
	{
		if (arg0) if ((lparg0 = env->GetShortArrayElements(arg0, NULL)) == NULL) goto fail;
	}
	memmove((void *)lparg0, (const void *)(intptr_t)arg1, (size_t)arg2);
fail:
#ifdef JNI_VERSION_1_2
	if (IS_JNI_1_2) {
		if (arg0 && lparg0) env->ReleasePrimitiveArrayCritical(arg0, lparg0, 0);
	} else
#endif
	{
		if (arg0 && lparg0) env->ReleaseShortArrayElements(arg0, lparg0, 0);
	}
	Example_NATIVE_EXIT(env, that, Example_memmove___3SJJ_FUNC);
}

extern "C" JNIEXPORT jlong JNICALL Example_NATIVE(memset)(JNIEnv *env, jclass that, jlong arg0, jint arg1, jlong arg2);
JNIEXPORT jlong JNICALL Example_NATIVE(memset)
	(JNIEnv *env, jclass that, jlong arg0, jint arg1, jlong arg2)
{
	jlong rc = 0;
	Example_NATIVE_ENTER(env, that, Example_memset_FUNC);
	rc = (intptr_t)(void *)memset((void *)(intptr_t)arg0, arg1, (size_t)arg2);
	Example_NATIVE_EXIT(env, that, Example_memset_FUNC);
	return rc;
}

extern "C" JNIEXPORT void JNICALL Example_NATIVE(passingtheenv)(JNIEnv *env, jclass that, jstring arg0, jobject arg1);
JNIEXPORT void JNICALL Example_NATIVE(passingtheenv)
	(JNIEnv *env, jclass that, jstring arg0, jobject arg1)
{
	const char *lparg0= NULL;
	
	Example_NATIVE_ENTER(env, that, Example_passingtheenv_FUNC);
	if (arg0) if ((lparg0 = env->GetStringUTFChars(arg0, NULL)) == NULL) goto fail;
	passingtheenv(lparg0, env);
fail:
	if (arg0 && lparg0) env->ReleaseStringUTFChars(arg0, lparg0);
	Example_NATIVE_EXIT(env, that, Example_passingtheenv_FUNC);
}

extern "C" JNIEXPORT void JNICALL Example_NATIVE(print_1foo)(JNIEnv *env, jclass that, jlong arg0);
JNIEXPORT void JNICALL Example_NATIVE(print_1foo)
	(JNIEnv *env, jclass that, jlong arg0)
{
	Example_NATIVE_ENTER(env, that, Example_print_1foo_FUNC);
	print_foo((struct foo *)(intptr_t)arg0);
	Example_NATIVE_EXIT(env, that, Example_print_1foo_FUNC);
}

extern "C" JNIEXPORT jint JNICALL Example_NATIVE(strlen)(JNIEnv *env, jclass that, jlong arg0);
JNIEXPORT jint JNICALL Example_NATIVE(strlen)
	(JNIEnv *env, jclass that, jlong arg0)
{
	jint rc = 0;
	Example_NATIVE_ENTER(env, that, Example_strlen_FUNC);
	rc = (jint)strlen((char *)(intptr_t)arg0);
	Example_NATIVE_EXIT(env, that, Example_strlen_FUNC);
	return rc;
}

#define Range_NATIVE(func) Java_test_Example_00024Range_##func

extern "C" JNIEXPORT jlong JNICALL Range_NATIVE(Range__)(JNIEnv *env, jclass that);
JNIEXPORT jlong JNICALL Range_NATIVE(Range__)
	(JNIEnv *env, jclass that)
{
	jlong rc = 0;
	Range_NATIVE_ENTER(env, that, Range_Range___FUNC);
	rc = (intptr_t)(Range *)new Range();
	Range_NATIVE_EXIT(env, that, Range_Range___FUNC);
	return rc;
}

extern "C" JNIEXPORT jlong JNICALL Range_NATIVE(Range__II)(JNIEnv *env, jclass that, jint arg0, jint arg1);
JNIEXPORT jlong JNICALL Range_NATIVE(Range__II)
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	jlong rc = 0;
	Range_NATIVE_ENTER(env, that, Range_Range__II_FUNC);
	rc = (intptr_t)(Range *)new Range(arg0, arg1);
	Range_NATIVE_EXIT(env, that, Range_Range__II_FUNC);
	return rc;
}

extern "C" JNIEXPORT void JNICALL Range_NATIVE(delete)(JNIEnv *env, jclass that, jlong arg0);
JNIEXPORT void JNICALL Range_NATIVE(delete)
	(JNIEnv *env, jclass that, jlong arg0)
{
	Range_NATIVE_ENTER(env, that, Range_delete_FUNC);
	delete (Range *)(intptr_t)arg0;
	Range_NATIVE_EXIT(env, that, Range_delete_FUNC);
}

extern "C" JNIEXPORT void JNICALL Range_NATIVE(dump)(JNIEnv *env, jclass that, jlong arg0);
JNIEXPORT void JNICALL Range_NATIVE(dump)
	(JNIEnv *env, jclass that, jlong arg0)
{
	Range_NATIVE_ENTER(env, that, Range_dump_FUNC);
	((Range *)(intptr_t)arg0)->dump();
	Range_NATIVE_EXIT(env, that, Range_dump_FUNC);
}

#define bar_NATIVE(func) Java_test_Example_00024bar_##func

extern "C" JNIEXPORT void JNICALL bar_NATIVE(init)(JNIEnv *env, jclass that)
{
	env->SetStaticIntField(that, env->GetStaticFieldID(that, "SIZEOF", "I"), (jint)sizeof(struct foo));
   return;
}
#define point_NATIVE(func) Java_test_Example_00024point_##func

extern "C" JNIEXPORT void JNICALL point_NATIVE(init)(JNIEnv *env, jclass that)
{
	env->SetStaticIntField(that, env->GetStaticFieldID(that, "SIZEOF", "I"), (jint)sizeof(point));
   return;
}
#define ObjectiveCExample_NATIVE(func) Java_test_ObjectiveCExample_##func

#if defined(__APPLE__)
extern "C" JNIEXPORT jlong JNICALL ObjectiveCExample_NATIVE(_00024__JJ)(JNIEnv *env, jclass that, jlong arg0, jlong arg1);
JNIEXPORT jlong JNICALL ObjectiveCExample_NATIVE(_00024__JJ)
	(JNIEnv *env, jclass that, jlong arg0, jlong arg1)
{
	jlong rc = 0;
	ObjectiveCExample_NATIVE_ENTER(env, that, ObjectiveCExample__00024__JJ_FUNC);
	rc = (intptr_t)(id)objc_msgSend((id)(intptr_t)arg0, (SEL)(intptr_t)arg1);
	ObjectiveCExample_NATIVE_EXIT(env, that, ObjectiveCExample__00024__JJ_FUNC);
	return rc;
}
#endif

#if defined(__APPLE__)
extern "C" JNIEXPORT jlong JNICALL ObjectiveCExample_NATIVE(_00024__JJLjava_lang_String_2)(JNIEnv *env, jclass that, jlong arg0, jlong arg1, jstring arg2);
JNIEXPORT jlong JNICALL ObjectiveCExample_NATIVE(_00024__JJLjava_lang_String_2)
	(JNIEnv *env, jclass that, jlong arg0, jlong arg1, jstring arg2)
{
	const char *lparg2= NULL;
	jlong rc = 0;
	ObjectiveCExample_NATIVE_ENTER(env, that, ObjectiveCExample__00024__JJLjava_lang_String_2_FUNC);
	if (arg2) if ((lparg2 = env->GetStringUTFChars(arg2, NULL)) == NULL) goto fail;
	rc = (intptr_t)(id)objc_msgSend((id)(intptr_t)arg0, (SEL)(intptr_t)arg1, lparg2);
fail:
	if (arg2 && lparg2) env->ReleaseStringUTFChars(arg2, lparg2);
	ObjectiveCExample_NATIVE_EXIT(env, that, ObjectiveCExample__00024__JJLjava_lang_String_2_FUNC);
	return rc;
}
#endif

#if defined(__APPLE__)
extern "C" JNIEXPORT jlong JNICALL ObjectiveCExample_NATIVE(objc_1getClass)(JNIEnv *env, jclass that, jstring arg0);
JNIEXPORT jlong JNICALL ObjectiveCExample_NATIVE(objc_1getClass)
	(JNIEnv *env, jclass that, jstring arg0)
{
	const char *lparg0= NULL;
	jlong rc = 0;
	ObjectiveCExample_NATIVE_ENTER(env, that, ObjectiveCExample_objc_1getClass_FUNC);
	if (arg0) if ((lparg0 = env->GetStringUTFChars(arg0, NULL)) == NULL) goto fail;
	rc = (intptr_t)(id)objc_getClass(lparg0);
fail:
	if (arg0 && lparg0) env->ReleaseStringUTFChars(arg0, lparg0);
	ObjectiveCExample_NATIVE_EXIT(env, that, ObjectiveCExample_objc_1getClass_FUNC);
	return rc;
}
#endif

#if defined(__APPLE__)
extern "C" JNIEXPORT jlong JNICALL ObjectiveCExample_NATIVE(sel_1registerName)(JNIEnv *env, jclass that, jstring arg0);
JNIEXPORT jlong JNICALL ObjectiveCExample_NATIVE(sel_1registerName)
	(JNIEnv *env, jclass that, jstring arg0)
{
	const char *lparg0= NULL;
	jlong rc = 0;
	ObjectiveCExample_NATIVE_ENTER(env, that, ObjectiveCExample_sel_1registerName_FUNC);
	if (arg0) if ((lparg0 = env->GetStringUTFChars(arg0, NULL)) == NULL) goto fail;
	rc = (intptr_t)(SEL)sel_registerName(lparg0);
fail:
	if (arg0 && lparg0) env->ReleaseStringUTFChars(arg0, lparg0);
	ObjectiveCExample_NATIVE_EXIT(env, that, ObjectiveCExample_sel_1registerName_FUNC);
	return rc;
}
#endif

