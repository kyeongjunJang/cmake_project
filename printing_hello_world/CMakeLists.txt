cmake_minimum_required(VERSION 3.10) 
# cmake_minimum_required 명령은 프로젝트를 빌드하는 데 필요한 최소 CMake 버전을 지정하는 데 사용됨
# 기본 구문 : cmake_minimum_required(VERSION <min_version> [FATAL_ERROR])
# VERSION : 필요한 최소 CMake 버전을 지정함
# <min_version> : 최소로 필요한 버전 번호
# FATAL_ERROR (optional) : 지정된 경우, CMake는 버전이 충족되지 않으면 처리를 중단함

project(printing_hello_world LANGUAGES CXX VERSION 1.0)
# Syntax

# Basic Usage
# project(<project-name> [LANGUAGES <language-name>...])

# Example
# project(MyProject LANGUAGES CXX)

# Parameters
# <project-name>
# 프로젝트의 이름을 정의
# 빌드 파일 및 기타 프로젝트 관련 설정 생성에 사용
# LANGUAGES <language-name>...
# 프로젝트에서 사용할 하나 이상의 프로그래밍 언어를 지정
# 일반적으로 사용되는 언어에는 C, CXX (C++용), Fortran, CUDA 등이 있음
# 생략할 경우 CMake는 프로젝트가 C와 C++로 작성된 것으로 간주함

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(${PROJECT_NAME} main.cpp)