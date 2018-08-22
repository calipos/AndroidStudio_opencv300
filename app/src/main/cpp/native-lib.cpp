#include <jni.h>
#include <string>
#include <opencv2/opencv.hpp>
extern "C" JNIEXPORT jstring

JNICALL
Java_uner_ii_cmakeopencv_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    cv::Mat src=cv::Mat::ones(3,3,CV_8UC1);

    std::string hello = "Hello from C++" + std::to_string(src.rows);

    return env->NewStringUTF(hello.c_str());
}
