/*******************************************************************************
 * Copyright (C) 2009-2011 FuseSource Corp.
 * 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *******************************************************************************/
#include "hawtjni.h"
#include "hawtjni-example_stats.h"

#ifdef NATIVE_STATS

int Example_nativeFunctionCount = 30;
int Example_nativeFunctionCallCount[30];
char * Example_nativeFunctionNames[] = {
	"callmeback",
	"char_1add",
	"foo_1add",
	"foowork",
	"free",
	"init",
	"malloc",
	"memmove__JJJ",
	"memmove__JLtest_Example_00024bar_2J",
	"memmove__J_3BJ",
	"memmove__J_3CJ",
	"memmove__J_3DJ",
	"memmove__J_3FJ",
	"memmove__J_3IJ",
	"memmove__J_3JJ",
	"memmove__J_3SJ",
	"memmove__Ltest_Example_00024bar_2JJ",
	"memmove___3BJJ",
	"memmove___3B_3CJ",
	"memmove___3CJJ",
	"memmove___3DJJ",
	"memmove___3FJJ",
	"memmove___3IJJ",
	"memmove___3I_3BJ",
	"memmove___3JJJ",
	"memmove___3SJJ",
	"memset",
	"passingtheenv",
	"print_1foo",
	"strlen",
};

#define STATS_NATIVE(func) Java_org_fusesource_hawtjni_runtime_NativeStats_##func

JNIEXPORT jint JNICALL STATS_NATIVE(Example_1GetFunctionCount)
	(JNIEnv *env, jclass that)
{
	return Example_nativeFunctionCount;
}

JNIEXPORT jstring JNICALL STATS_NATIVE(Example_1GetFunctionName)
	(JNIEnv *env, jclass that, jint index)
{
	return env->NewStringUTF(Example_nativeFunctionNames[index]);
}

JNIEXPORT jint JNICALL STATS_NATIVE(Example_1GetFunctionCallCount)
	(JNIEnv *env, jclass that, jint index)
{
	return Example_nativeFunctionCallCount[index];
}

#endif
#ifdef NATIVE_STATS

int Range_nativeFunctionCount = 4;
int Range_nativeFunctionCallCount[4];
char * Range_nativeFunctionNames[] = {
	"Range__",
	"Range__II",
	"delete",
	"dump",
};

#define STATS_NATIVE(func) Java_org_fusesource_hawtjni_runtime_NativeStats_##func

JNIEXPORT jint JNICALL STATS_NATIVE(Range_1GetFunctionCount)
	(JNIEnv *env, jclass that)
{
	return Range_nativeFunctionCount;
}

JNIEXPORT jstring JNICALL STATS_NATIVE(Range_1GetFunctionName)
	(JNIEnv *env, jclass that, jint index)
{
	return env->NewStringUTF(Range_nativeFunctionNames[index]);
}

JNIEXPORT jint JNICALL STATS_NATIVE(Range_1GetFunctionCallCount)
	(JNIEnv *env, jclass that, jint index)
{
	return Range_nativeFunctionCallCount[index];
}

#endif
#ifdef NATIVE_STATS

int bar_nativeFunctionCount = 1;
int bar_nativeFunctionCallCount[1];
char * bar_nativeFunctionNames[] = {
	"init",
};

#define STATS_NATIVE(func) Java_org_fusesource_hawtjni_runtime_NativeStats_##func

JNIEXPORT jint JNICALL STATS_NATIVE(bar_1GetFunctionCount)
	(JNIEnv *env, jclass that)
{
	return bar_nativeFunctionCount;
}

JNIEXPORT jstring JNICALL STATS_NATIVE(bar_1GetFunctionName)
	(JNIEnv *env, jclass that, jint index)
{
	return env->NewStringUTF(bar_nativeFunctionNames[index]);
}

JNIEXPORT jint JNICALL STATS_NATIVE(bar_1GetFunctionCallCount)
	(JNIEnv *env, jclass that, jint index)
{
	return bar_nativeFunctionCallCount[index];
}

#endif
#ifdef NATIVE_STATS

int point_nativeFunctionCount = 1;
int point_nativeFunctionCallCount[1];
char * point_nativeFunctionNames[] = {
	"init",
};

#define STATS_NATIVE(func) Java_org_fusesource_hawtjni_runtime_NativeStats_##func

JNIEXPORT jint JNICALL STATS_NATIVE(point_1GetFunctionCount)
	(JNIEnv *env, jclass that)
{
	return point_nativeFunctionCount;
}

JNIEXPORT jstring JNICALL STATS_NATIVE(point_1GetFunctionName)
	(JNIEnv *env, jclass that, jint index)
{
	return env->NewStringUTF(point_nativeFunctionNames[index]);
}

JNIEXPORT jint JNICALL STATS_NATIVE(point_1GetFunctionCallCount)
	(JNIEnv *env, jclass that, jint index)
{
	return point_nativeFunctionCallCount[index];
}

#endif
#ifdef NATIVE_STATS

int ObjectiveCExample_nativeFunctionCount = 4;
int ObjectiveCExample_nativeFunctionCallCount[4];
char * ObjectiveCExample_nativeFunctionNames[] = {
	"_00024__JJ",
	"_00024__JJLjava_lang_String_2",
	"objc_1getClass",
	"sel_1registerName",
};

#define STATS_NATIVE(func) Java_org_fusesource_hawtjni_runtime_NativeStats_##func

JNIEXPORT jint JNICALL STATS_NATIVE(ObjectiveCExample_1GetFunctionCount)
	(JNIEnv *env, jclass that)
{
	return ObjectiveCExample_nativeFunctionCount;
}

JNIEXPORT jstring JNICALL STATS_NATIVE(ObjectiveCExample_1GetFunctionName)
	(JNIEnv *env, jclass that, jint index)
{
	return env->NewStringUTF(ObjectiveCExample_nativeFunctionNames[index]);
}

JNIEXPORT jint JNICALL STATS_NATIVE(ObjectiveCExample_1GetFunctionCallCount)
	(JNIEnv *env, jclass that, jint index)
{
	return ObjectiveCExample_nativeFunctionCallCount[index];
}

#endif
