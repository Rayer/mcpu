cmake_minimum_required(VERSION 2.6)

project(MCPU)

message(MCPU - Multipurpose Communication Process Unit)
message(MCPU Building Script Ver 0.1)

set(smngt_lib
    src/smngt/main.cpp
    )

add_executable(smngt_dev ${smngt_lib})
    


