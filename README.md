# AssimpLib
基于 [Assimp 5.0.1](https://github.com/assimp/assimp/releases/tag/v5.0.1)  Release 版裁剪，只保留 OBJ 和 FBX 格式的 3D 模型解析，并使用交叉编译工具链编译成 Android 和 iOS 库

# 编译
- 编译 Android 静态库：

  ① **记得要修改 build_for_android.sh 中最上面的 MY_NDK、MY_SDK、MY_CMAKE 路径，改成自己对应的安装路径**
  
  ② 执行 build_for_android.sh, 最后会生成 Android 平台 arm64-v8a、armeabi-v7a 的静态库
  
- 编译 iOS 静态库：  
 
  ① 执行 build_for_android.sh, 最后会生成 iOS 平台的静态库，默认编译的是 all(包含 armv7、armv7s、arm64)
  
# 扩展
- 如果想支持更多格式解析，拷贝 [Assimp 5.0.1](https://github.com/assimp/assimp/releases/tag/v5.0.1) 对应格式目录下的源文件，并在 **ImporterRegistry.cpp** 中注册
- 如果想支持更多的后处理，拷贝对应的后处理源文件，并在 **PostStepRegistry.cpp** 注册

# 预编译好的库
- **在 pre_build 目录，3D 模型解析仅支持 OBJ 和 FBX 格式，后处理仅支持 FlipUVsProcess、TriangulateProcess**


    ![image](https://user-images.githubusercontent.com/46780503/137740731-40b49dae-c162-44f2-ad8f-ffb3e6621da5.png)


# 编译截图
![image](https://user-images.githubusercontent.com/46780503/137738342-f5656a86-c534-48f6-8c7e-5961c7a7aa6b.png)
