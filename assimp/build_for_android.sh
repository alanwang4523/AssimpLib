#!/bin/sh

MY_NDK="/Users/wangjianjun/AndroidDev/android-ndk-r16b"
MY_SDK="/Users/wangjianjun/AndroidDev/sdk"
MY_CMAKE="${MY_SDK}/cmake/3.10.2.4988404/bin/cmake"

OUTPUT_LIBS="./build/libs/android"

function build_with_armeabi() {
	ARME_ABI=$1
	API_LEVEL=$2
	PLATFORM="android-${API_LEVEL}"
	echo ${ARME_ABI}
	echo ${PLATFORM}

	BUILD_DIR="./build/android/${ARME_ABI}"
	PRE_EXE_DIR=$(pwd)
	echo ${PRE_EXE_DIR}

	# 使用 android 工具链生成 makefile
	${MY_CMAKE} \
	-H"./" \
	-B"${BUILD_DIR}" \
	-DANDROID_ABI="${ARME_ABI}" \
	-DANDROID_NDK="${MY_NDK}" \
	-DCMAKE_LIBRARY_OUTPUT_DIRECTORY="./build/android/libs/${ARME_ABI}" \
	-DCMAKE_BUILD_TYPE="Release" \
	-DCMAKE_TOOLCHAIN_FILE="${MY_NDK}/build/cmake/android.toolchain.cmake" \
	-DANDROID_PLATFORM=${PLATFORM} \
	-DANDROID_TOOLCHAIN="clang" \
	-DCMAKE_C_FLAGS="-fpic -fexceptions -frtti" \
	-DCMAKE_CXX_FLAGS="-fpic -fexceptions -frtti" \
	-DANDROID_STL="c++_static" \

	# 生成目标文件
	cd ${BUILD_DIR}
	make

	# 将目标文件移至指定目录
	cd ${PRE_EXE_DIR}
	mkdir -p ${OUTPUT_LIBS}/${ARME_ABI}/
	mv ${BUILD_DIR}/libs/* ${OUTPUT_LIBS}/${ARME_ABI}/
	rm -r ./build/android
}

build_with_armeabi armeabi-v7a 16
build_with_armeabi arm64-v8a 21