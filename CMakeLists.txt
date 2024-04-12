cmake_minimum_required(VERSION 3.29.0)
project(planning)#项目名
set(CMAKE_CXX_STANDARD 17)#版本

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)#动态库和exe都制定到bin下

file(GLOB SRC_LISTS ${PROJECT_SOURCE_DIR}/src/*.cpp)#目录下的cpp文件打包

# include_directories(${PROJECT_SOURCE_DIR}/include)
add_library(common SHARED ${SRC_LISTS}
)#创建动态库

target_include_directories(common
PUBLIC
${PROJECT_SOURCE_DIR}/include
)

add_executable(planning_main main.cpp)#生成可执行文件,（名称，依赖）

target_link_libraries(planning_main PUBLIC common)
# target_include_directories(planning_main PUBLIC ${PROJECT_SOURCE_DIR}/include)

# target_include_directories(planning_main PUBLIC common)



