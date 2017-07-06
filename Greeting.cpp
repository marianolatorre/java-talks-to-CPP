//
//  Greeting.cpp
//  ObjC2
//
//  Created by mariano latorre on 05/07/2017.
//  Copyright © 2017 mariano latorre. All rights reserved.
//

#include "Greeting.h"
#include <stdio.h>
#include <string>


JNIEXPORT jstring JNICALL Java_Greeting_greet
        (JNIEnv *env, jobject obj) {
	std::string s = "Hello C++!";
    return env->NewStringUTF(s.data());
}

