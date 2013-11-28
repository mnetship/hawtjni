/*******************************************************************************
 * Copyright (C) 2009-2011 FuseSource Corp.
 * 
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *******************************************************************************/
#include "hawtjni-example.h"

void cachebarFields(JNIEnv *env, jobject lpObject);
struct foo *getbarFields(JNIEnv *env, jobject lpObject, struct foo *lpStruct);
void setbarFields(JNIEnv *env, jobject lpObject, struct foo *lpStruct);

void cachepointFields(JNIEnv *env, jobject lpObject);
point *getpointFields(JNIEnv *env, jobject lpObject, point *lpStruct);
void setpointFields(JNIEnv *env, jobject lpObject, point *lpStruct);

