/*******************************************************************************
 * Copyright (C) 2009-2011 FuseSource Corp.
 * 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *******************************************************************************/
#ifdef NATIVE_STATS
extern int Example_nativeFunctionCount;
extern int Example_nativeFunctionCallCount[];
extern char* Example_nativeFunctionNames[];
#define Example_NATIVE_ENTER(env, that, func) Example_nativeFunctionCallCount[func]++;
#define Example_NATIVE_EXIT(env, that, func) 
#else
#ifndef Example_NATIVE_ENTER
#define Example_NATIVE_ENTER(env, that, func) 
#endif
#ifndef Example_NATIVE_EXIT
#define Example_NATIVE_EXIT(env, that, func) 
#endif
#endif

typedef enum {
	Example_callmeback_FUNC,
	Example_char_1add_FUNC,
	Example_foo_1add_FUNC,
	Example_foowork_FUNC,
	Example_free_FUNC,
	Example_init_FUNC,
	Example_malloc_FUNC,
	Example_memmove__JJJ_FUNC,
	Example_memmove__JLtest_Example_00024bar_2J_FUNC,
	Example_memmove__J_3BJ_FUNC,
	Example_memmove__J_3CJ_FUNC,
	Example_memmove__J_3DJ_FUNC,
	Example_memmove__J_3FJ_FUNC,
	Example_memmove__J_3IJ_FUNC,
	Example_memmove__J_3JJ_FUNC,
	Example_memmove__J_3SJ_FUNC,
	Example_memmove__Ltest_Example_00024bar_2JJ_FUNC,
	Example_memmove___3BJJ_FUNC,
	Example_memmove___3B_3CJ_FUNC,
	Example_memmove___3CJJ_FUNC,
	Example_memmove___3DJJ_FUNC,
	Example_memmove___3FJJ_FUNC,
	Example_memmove___3IJJ_FUNC,
	Example_memmove___3I_3BJ_FUNC,
	Example_memmove___3JJJ_FUNC,
	Example_memmove___3SJJ_FUNC,
	Example_memset_FUNC,
	Example_passingtheenv_FUNC,
	Example_print_1foo_FUNC,
	Example_strlen_FUNC,
} Example_FUNCS;
#ifdef NATIVE_STATS
extern int Range_nativeFunctionCount;
extern int Range_nativeFunctionCallCount[];
extern char* Range_nativeFunctionNames[];
#define Range_NATIVE_ENTER(env, that, func) Range_nativeFunctionCallCount[func]++;
#define Range_NATIVE_EXIT(env, that, func) 
#else
#ifndef Range_NATIVE_ENTER
#define Range_NATIVE_ENTER(env, that, func) 
#endif
#ifndef Range_NATIVE_EXIT
#define Range_NATIVE_EXIT(env, that, func) 
#endif
#endif

typedef enum {
	Range_Range___FUNC,
	Range_Range__II_FUNC,
	Range_delete_FUNC,
	Range_dump_FUNC,
} Range_FUNCS;
#ifdef NATIVE_STATS
extern int bar_nativeFunctionCount;
extern int bar_nativeFunctionCallCount[];
extern char* bar_nativeFunctionNames[];
#define bar_NATIVE_ENTER(env, that, func) bar_nativeFunctionCallCount[func]++;
#define bar_NATIVE_EXIT(env, that, func) 
#else
#ifndef bar_NATIVE_ENTER
#define bar_NATIVE_ENTER(env, that, func) 
#endif
#ifndef bar_NATIVE_EXIT
#define bar_NATIVE_EXIT(env, that, func) 
#endif
#endif

typedef enum {
	bar_init_FUNC,
} bar_FUNCS;
#ifdef NATIVE_STATS
extern int point_nativeFunctionCount;
extern int point_nativeFunctionCallCount[];
extern char* point_nativeFunctionNames[];
#define point_NATIVE_ENTER(env, that, func) point_nativeFunctionCallCount[func]++;
#define point_NATIVE_EXIT(env, that, func) 
#else
#ifndef point_NATIVE_ENTER
#define point_NATIVE_ENTER(env, that, func) 
#endif
#ifndef point_NATIVE_EXIT
#define point_NATIVE_EXIT(env, that, func) 
#endif
#endif

typedef enum {
	point_init_FUNC,
} point_FUNCS;
#ifdef NATIVE_STATS
extern int ObjectiveCExample_nativeFunctionCount;
extern int ObjectiveCExample_nativeFunctionCallCount[];
extern char* ObjectiveCExample_nativeFunctionNames[];
#define ObjectiveCExample_NATIVE_ENTER(env, that, func) ObjectiveCExample_nativeFunctionCallCount[func]++;
#define ObjectiveCExample_NATIVE_EXIT(env, that, func) 
#else
#ifndef ObjectiveCExample_NATIVE_ENTER
#define ObjectiveCExample_NATIVE_ENTER(env, that, func) 
#endif
#ifndef ObjectiveCExample_NATIVE_EXIT
#define ObjectiveCExample_NATIVE_EXIT(env, that, func) 
#endif
#endif

typedef enum {
	ObjectiveCExample__00024__JJ_FUNC,
	ObjectiveCExample__00024__JJLjava_lang_String_2_FUNC,
	ObjectiveCExample_objc_1getClass_FUNC,
	ObjectiveCExample_sel_1registerName_FUNC,
} ObjectiveCExample_FUNCS;
