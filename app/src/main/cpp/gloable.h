//
// Created by Administrator on 2017/8/12.
//

#ifndef SMPROJECT_GLOABLE_H
#define SMPROJECT_GLOABLE_H

# ifdef Debug
#include <android/log.h>
 #define LOG_TAG "MainActivityTAG"
 #define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)
# endif

#endif //SMPROJECT_GLOABLE_H
