#!/bin/sh

OUTPUT_LIBS="./build/libs/ios"

function build_with_platform_and_armeabi() {
	PLATFORM=$1
	ARME_ABI=$2
	echo ${PLATFORM}
	echo ${ARME_ABI}

	BUILD_DIR="./build/ios/${ARME_ABI}"
	PRE_EXE_DIR=$(pwd)
	echo ${PRE_EXE_DIR}

	cmake \
	-H"./" \
	-B"${BUILD_DIR}" \
	-DCMAKE_BUILD_TYPE="Release" \
	-DCMAKE_TOOLCHAIN_FILE="./toolchain/ios.toolchain.cmake" \
	-DIOS_PLATFORM=${PLATFORM} \
	-DCMAKE_C_FLAGS="-fpic -fexceptions -frtti" \
	-DCMAKE_CXX_FLAGS="-fpic -fexceptions -frtti -std=c++11 -stdlib=libc++" \
#	-DIOS_ARCH=${ARME_ABI} \

	# 生成目标文件
	cd ${BUILD_DIR}
	make

	# 将目标文件移至指定目录
	cd ${PRE_EXE_DIR}
	mkdir -p ${OUTPUT_LIBS}/${ARME_ABI}/
	mv ${BUILD_DIR}/libs/* ${OUTPUT_LIBS}/${ARME_ABI}/
	rm -r ./build/ios
}

build_with_platform_and_armeabi "OS" "all"

#build_with_platform_and_armeabi "OS" "armv7"
#build_with_platform_and_armeabi "OS" "armv7s"
#build_with_platform_and_armeabi "OS" "arm64"
#
#build_with_platform_and_armeabi "SIMULATOR64" "x86_64"
#build_with_platform_and_armeabi "SIMULATOR" "i386"