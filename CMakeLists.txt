cmake_minimum_required(VERSION 3.31)
project(runtrackCPP)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ----------- Compilation des fichiers de Jour01 -----------
foreach(i RANGE 0 14)
    if(i LESS 10)
        set(i_padded 0${i})
    else()
        set(i_padded ${i})
    endif()

    set(exe_name Job${i_padded})
    set(src_file ${CMAKE_SOURCE_DIR}/Jour01/${exe_name}.cpp)

    if(EXISTS ${src_file})
        add_executable(${exe_name}_J1 ${src_file})
        set_target_properties(${exe_name}_J1 PROPERTIES
                OUTPUT_NAME ${exe_name}
                RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/Jour01/bin
        )
    endif()
endforeach()

# ----------- Compilation des fichiers de Jour02 -----------
foreach(i RANGE 0 15)
    if(i LESS 10)
        set(i_padded 0${i})
    else()
        set(i_padded ${i})
    endif()

    set(exe_name Job${i_padded})
    set(src_file ${CMAKE_SOURCE_DIR}/Jour02/${exe_name}.cpp
            Jour02/Job08.cpp
            Jour02/Job09.cpp)

    if(EXISTS ${src_file})
        add_executable(${exe_name}_J2 ${src_file})
        set_target_properties(${exe_name}_J2 PROPERTIES
                OUTPUT_NAME ${exe_name}
                RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/Jour02/bin
        )
    endif()
endforeach()

# ----------- Compilation des fichiers de Jour03 -----------
foreach(i RANGE 0 15)
    if(i LESS 10)
        set(i_padded 0${i})
    else()
        set(i_padded ${i})
    endif()

    set(exe_name Job${i_padded})
    set(src_file ${CMAKE_SOURCE_DIR}/Jour03/${exe_name}.cpp)

    if(EXISTS ${src_file})
        add_executable(${exe_name}_J3 ${src_file})
        set_target_properties(${exe_name}_J3 PROPERTIES
                OUTPUT_NAME ${exe_name}
                RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/Jour03/bin
        )
    endif()
endforeach()