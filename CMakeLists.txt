cmake_minimum_required(VERSION 2.6)

project(MCPU)

message(MCPU - Multipurpose Communication Process Unit)
message(MCPU Building Script Ver 0.1)

set(CMAKE_CXX_FLAGS "-std=c++0x")

set(smngt_lib
    src/smngt/main.cpp
	src/smngt/AdmSocketProtocol.cpp
	src/smngt/CustomAdmSocketProtocol.cpp
    )



add_definitions("")
include_directories(src/smngt)
add_executable(smngt_dev ${smngt_lib})
    


