
/**
 * Author: AlanWang4523.
 * Date: 2021/9/23 17:51.
 * Mail: alanwang4523@gmail.com
 */

#ifndef STARMAKER_LOGGER_H
#define STARMAKER_LOGGER_H

//#define ASSIMP_TAG "ASSIMP"
//#define ASSIMP_LOG_WARN_F(...)
//#define ASSIMP_LOG_WARN_F(...)
//#define ASSIMP_LOG_DEBUG_F(...)
//#define ASSIMP_LOG_INFO_F(...)
//#define ASSIMP_LOG_WARN(...)
//#define ASSIMP_LOG_ERROR(...)
//#define ASSIMP_LOG_INFO(...)

/**
#ifdef __ANDROID__
#include <android/log.h>

#ifdef STRELEASE
#define ASSIMP_LOG_WARN_F(...)
#define ASSIMP_LOG_WARN_F(...)
#define ASSIMP_LOG_DEBUG_F(...)
#define ASSIMP_LOG_INFO_F(...)
#define ASSIMP_LOG_WARN(...)
#define ASSIMP_LOG_ERROR(...)
#define ASSIMP_LOG_INFO(...)
#else
#define ASSIMP_LOG_WARN_F( ...) __android_log_print(ANDROID_LOG_DEBUG  , ASSIMP_TAG, __VA_ARGS__)
#define ASSIMP_LOG_ERROR_F( ...) __android_log_print(ANDROID_LOG_ERROR  , ASSIMP_TAG, __VA_ARGS__)
#define ASSIMP_LOG_DEBUG_F(...) __android_log_print(ANDROID_LOG_DEBUG  , ASSIMP_TAG, __VA_ARGS__)
#define ASSIMP_LOG_INFO_F(...) __android_log_print(ANDROID_LOG_DEBUG  , ASSIMP_TAG, __VA_ARGS__)
#define ASSIMP_LOG_WARN(...) __android_log_print(ANDROID_LOG_DEBUG  , ASSIMP_TAG, __VA_ARGS__)
#define ASSIMP_LOG_ERROR(...) __android_log_print(ANDROID_LOG_ERROR  , ASSIMP_TAG, __VA_ARGS__)
#define ASSIMP_LOG_DEBUG(...) __android_log_print(ANDROID_LOG_DEBUG  , ASSIMP_TAG, __VA_ARGS__)
#define ASSIMP_LOG_INFO(...) __android_log_print(ANDROID_LOG_DEBUG  , ASSIMP_TAG, __VA_ARGS__)
#endif

#elif defined(__APPLE__)

#ifdef DEBUG
        #define ASSIMP_LOG_WARN_F(...)  printf("       %s",ASSIMP_TAG);printf(__VA_ARGS__);
        #define ASSIMP_LOG_ERROR_F(...)  printf("Error: %s",ASSIMP_TAG);printf(__VA_ARGS__);
        #define ASSIMP_LOG_DEBUG_F(...)  printf("       %s",ASSIMP_TAG);printf(__VA_ARGS__);
        #define ASSIMP_LOG_INFO_F(...)  printf("       %s",ASSIMP_TAG);printf(__VA_ARGS__);
        #define ASSIMP_LOG_WARN(...)  printf("       %s",ASSIMP_TAG);printf(__VA_ARGS__);
        #define ASSIMP_LOG_ERROR(...)  printf("Error: %s",ASSIMP_TAG);printf(__VA_ARGS__);
        #define ASSIMP_LOG_DEBUG(...)  printf("       %s",ASSIMP_TAG);printf(__VA_ARGS__);
        #define ASSIMP_LOG_INFO(...)  printf("       %s",ASSIMP_TAG);printf(__VA_ARGS__);
    #elif
        #define ASSIMP_LOG_WARN_F(...)
        #define ASSIMP_LOG_ERROR_F(...)
        #define ASSIMP_LOG_DEBUG_F(...)
        #define ASSIMP_LOG_INFO_F(...)
        #define ASSIMP_LOG_WARN(...)
        #define ASSIMP_LOG_ERROR(...)
        #define ASSIMP_LOG_DEBUG(...)
        #define ASSIMP_LOG_INFO(...)
    #endif

#endif
 **/

#endif //STARMAKER_LOGGER_H
