#include <jni.h>
#include <stdio.h>
#include "StringDemo.h"
JNIEXPORT jstring JNICALL
Java_StringDemo_getLine(JNIEnv *env, jobject obj, jstring stringdemo){
	char buf[128];
	const jbyte *str;
	str = (*env)->GetStringUTFChars(env, stringdemo, NULL);
	if (str == NULL)
		return NULL;
	printf("%s", str);
	(*env)->ReleaseStringUTFChars(env, stringdemo, str);
	
	scanf("%127s", buf);
	return (*env)->NewStringUTF(env, buf);
}
