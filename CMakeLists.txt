cmake_minimum_required(VERSION 3.29.0)
project(planning)#项目名
set(CMAKE_CXX_STANDARD 11)#版本

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR/bin})#可执行文件路径
aux_source_directory(. SRC_LISTS)#所有的cpp文件打包放在这个变量里面
add_executable(planning_main ${SRC_LISTS})#生成可执行文件,（名称，依赖）
