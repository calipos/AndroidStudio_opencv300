# AndroidStudio_opencv300
AndroidStudio用cmake的方式配置opencv

使用的是opencv3.0.0
在ubuntu1604下编译：
cmake -DCMAKE_TOOLCHAIN_FILE=/home/ii/android-ndk-r17-beta2/build/cmake/android.toolchain.cmake   -DANDROID_NDK=/home/ii/android-ndk-r17-beta2  -DANDROID_ABI="armeabi-v7a" -DANDROID_NATIVE_API_LEVEL=14  -DANDROID_ARM_NEON=ON  -DWITH_TBB=OFF -DWITH_FFMPEG=OFF  -DWITH_V4L=OFF -DINSTALL_C_EXAMPLES=OFF -DINSTALL_PYTHON_EXAMPLES=OFF -DBUILD_EXAMPLES=OFF -DWITH_QT=OFF -DWITH_OPENGL=OFF  -DBUILD_opencv_flann=OFF -DBUILD_opencv_objdetect=OFF -DBUILD_opencv_ml=OFF  -DBUILD_opencv_photo=OFF -DBUILD_opencv_video=OFF -DBUILD_opencv_superres=OFF  -DWITH_WEBP=OFF    -DWITH_PNG=OFF  -DWITH_JASPER=OFF -DWITH_FFMPEG=OFF -DWITH_VFW=OFF  -DWITH_DSHOW=OFF   -DBUILD_PERF_TESTS=OFF -DBUILD_TESTS=OFF -DWITH_JPEG=OFF  -DBUILD_JPEG=OFF -DWITH_TIFF=OFF  -DBUILD_TIFF=OFF -DWITH_OPENEXR=OFF  -DBUILD_OPENEXR=OFF   -DBUILD_ZLIB=OFF -DBUILD_opencv_python2=OFF -DBUILD_opencv_python3=OFF  ..