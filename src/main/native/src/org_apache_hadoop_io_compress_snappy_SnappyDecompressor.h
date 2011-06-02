/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_apache_hadoop_io_compress_snappy_SnappyDecompressor */

#ifndef _Included_org_apache_hadoop_io_compress_snappy_SnappyDecompressor
#define _Included_org_apache_hadoop_io_compress_snappy_SnappyDecompressor
#ifdef __cplusplus
extern "C" {
#endif
#undef org_apache_hadoop_io_compress_snappy_SnappyDecompressor_DEFAULT_DIRECT_BUFFER_SIZE
#define org_apache_hadoop_io_compress_snappy_SnappyDecompressor_DEFAULT_DIRECT_BUFFER_SIZE 65536L
/*
 * Class:     org_apache_hadoop_io_compress_snappy_SnappyDecompressor
 * Method:    initIDs
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_apache_hadoop_io_compress_snappy_SnappyDecompressor_initIDs
  (JNIEnv *, jclass);

/*
 * Class:     org_apache_hadoop_io_compress_snappy_SnappyDecompressor
 * Method:    decompressBytesDirect
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_apache_hadoop_io_compress_snappy_SnappyDecompressor_decompressBytesDirect
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif