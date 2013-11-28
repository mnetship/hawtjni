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

typedef struct bar_FID_CACHE {
	int cached;
	jclass clazz;
	jfieldID a, b, c, c5, prev;
} bar_FID_CACHE;

bar_FID_CACHE barFc;

void cachebarFields(JNIEnv *env, jobject lpObject)
{
	if (barFc.cached) return;
	barFc.clazz = env->GetObjectClass(lpObject);
	barFc.a = env->GetFieldID(barFc.clazz, "a", "I");
	barFc.b = env->GetFieldID(barFc.clazz, "b", "J");
	barFc.c = env->GetFieldID(barFc.clazz, "c", "[B");
	barFc.c5 = env->GetFieldID(barFc.clazz, "c5", "B");
	barFc.prev = env->GetFieldID(barFc.clazz, "prev", "J");
	hawtjni_w_barrier();
	barFc.cached = 1;
}

struct foo *getbarFields(JNIEnv *env, jobject lpObject, struct foo *lpStruct)
{
	if (!barFc.cached) cachebarFields(env, lpObject);
	lpStruct->a = env->GetIntField(lpObject, barFc.a);
	lpStruct->b = (size_t)env->GetLongField(lpObject, barFc.b);
	{
	jbyteArray lpObject1 = (jbyteArray)env->GetObjectField(lpObject, barFc.c);
	env->GetByteArrayRegion(lpObject1, 0, sizeof(lpStruct->c), (jbyte *)lpStruct->c);
	}
	lpStruct->c[5] = env->GetByteField(lpObject, barFc.c5);
	lpStruct->prev = (struct foo *)(intptr_t)env->GetLongField(lpObject, barFc.prev);
	return lpStruct;
}

void setbarFields(JNIEnv *env, jobject lpObject, struct foo *lpStruct)
{
	if (!barFc.cached) cachebarFields(env, lpObject);
	env->SetIntField(lpObject, barFc.a, (jint)lpStruct->a);
	env->SetLongField(lpObject, barFc.b, (jlong)lpStruct->b);
	{
	jbyteArray lpObject1 = (jbyteArray)env->GetObjectField(lpObject, barFc.c);
	env->SetByteArrayRegion(lpObject1, 0, sizeof(lpStruct->c), (jbyte *)lpStruct->c);
	}
	env->SetByteField(lpObject, barFc.c5, (jbyte)lpStruct->c[5]);
	env->SetLongField(lpObject, barFc.prev, (jlong)(intptr_t)lpStruct->prev);
}

typedef struct point_FID_CACHE {
	int cached;
	jclass clazz;
	jfieldID x, y;
} point_FID_CACHE;

point_FID_CACHE pointFc;

void cachepointFields(JNIEnv *env, jobject lpObject)
{
	if (pointFc.cached) return;
	pointFc.clazz = env->GetObjectClass(lpObject);
	pointFc.x = env->GetFieldID(pointFc.clazz, "x", "I");
	pointFc.y = env->GetFieldID(pointFc.clazz, "y", "I");
	hawtjni_w_barrier();
	pointFc.cached = 1;
}

point *getpointFields(JNIEnv *env, jobject lpObject, point *lpStruct)
{
	if (!pointFc.cached) cachepointFields(env, lpObject);
	lpStruct->x = env->GetIntField(lpObject, pointFc.x);
	lpStruct->y = env->GetIntField(lpObject, pointFc.y);
	return lpStruct;
}

void setpointFields(JNIEnv *env, jobject lpObject, point *lpStruct)
{
	if (!pointFc.cached) cachepointFields(env, lpObject);
	env->SetIntField(lpObject, pointFc.x, (jint)lpStruct->x);
	env->SetIntField(lpObject, pointFc.y, (jint)lpStruct->y);
}

