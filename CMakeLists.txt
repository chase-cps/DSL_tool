###############################################################################
# CMake file for the CHASE tool managing the specifications expressed in the DSL.
# @author Michele Lora
###############################################################################

cmake_minimum_required (VERSION 3.18)
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    set(CMAKE_BUILD_TYPE Release CACHE STRING "Choose the type of build." FORCE)
endif()
set(CMAKE_C_FLAGS_DEBUG "-O0 -Wall -Wextra -pedantic -ggdb -fPIC")
set(CMAKE_C_FLAGS_RELEASE "-O3 -fPIC")
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -Wall -Wextra -pedantic -ggdb -fPIC")
set(CMAKE_CXX_FLAGS_RELEASE "-O3  -fPIC")

if(DEFINED ENV{CHASE_INSTALL_DIR})
    set(CMAKE_INSTALL_PREFIX $ENV{CHASE_INSTALL_DIR} CACHE PATH "Install top-level directory" FORCE)
else()
    set(CMAKE_INSTALL_PREFIX ../../install_dir CACHE PATH "Install top-level directory" FORCE)
endif()

project(DSL_TOOL VERSION 1.0)
# Use one Python for the headers and the module suffix (FindPython).
find_package(Python COMPONENTS Interpreter Development.Module REQUIRED)
set(PYBIND11_FINDPYTHON ON)
find_package(pybind11 REQUIRED)


set(CHASEPATH ${CMAKE_INSTALL_PREFIX}  CACHE PATH "The path of the Chase installation")

include_directories(
    ${CHASEPATH}/third_party/antlr4/include
    ${CHASEPATH}/chase/include
    ${CHASEPATH}/chase/include/utilities
    ${CHASEPATH}/chase/include/representation
    ${CHASEPATH}/chase/include/backends
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/include/DSLParser
    )

set(DSL_FRONTEND_SRC ${PROJECT_SOURCE_DIR}/src)

set(DSL_lib_srcs
    ${DSL_FRONTEND_SRC}/DSLParser/ChaseBaseListener.cpp
    ${DSL_FRONTEND_SRC}/DSLParser/ChaseLexer.cpp
    ${DSL_FRONTEND_SRC}/DSLParser/ChaseListener.cpp
    ${DSL_FRONTEND_SRC}/DSLParser/ChaseParser.cpp
    ${DSL_FRONTEND_SRC}/DSLProblem.cc
    ${DSL_FRONTEND_SRC}/DSLSpecsBuilder.cc
    ${DSL_FRONTEND_SRC}/DSLSpecBuilder_support.cc
    ${DSL_FRONTEND_SRC}/DSLProblemDefinitions.cc
    ${DSL_FRONTEND_SRC}/DSLDesignProblem_patterns.cc
    ${DSL_FRONTEND_SRC}/DSLDesignProblem_support.cc
    )

set(DSL_tool_srcs
    ${DSL_lib_srcs}
    ${DSL_FRONTEND_SRC}/main.cc
    )

if(COMMAND cmake_policy)
    cmake_policy(SET CMP0003 NEW)
endif(COMMAND cmake_policy)

add_library(chase_DSL
    ${DSL_lib_srcs}
    )

install(TARGETS chase_DSL
    DESTINATION chase/lib
    )

install(DIRECTORY ${PROJECT_SOURCE_DIR}/include/
    DESTINATION chase/include/frontends
    )

add_executable(dsl_tool
    ${DSL_tool_srcs})

target_link_libraries(
    dsl_tool
    chase
    chase-backends
    antlr4-runtime)

target_link_directories(
    dsl_tool
    PRIVATE ${CHASEPATH}/chase/lib
    PRIVATE ${CHASEPATH}/third_party/antlr4/lib)

# Set rpath for macOS
if(APPLE)
    set_target_properties(dsl_tool PROPERTIES
        INSTALL_RPATH "@executable_path/../lib;@executable_path/../../third_party/antlr4/lib"
    )
elseif(UNIX)
    set_target_properties(dsl_tool PROPERTIES
        INSTALL_RPATH "\$ORIGIN/../lib;\$ORIGIN/../../third_party/antlr4/lib")
endif()

install(TARGETS dsl_tool DESTINATION chase/bin)

pybind11_add_module(
    pychase_DSL MODULE
    src/bindings.cc
    ${DSL_lib_srcs}
    )

target_link_libraries(pychase_DSL PRIVATE
    chase-backends
    antlr4-runtime
    chase)

target_link_directories(
    pychase_DSL
    PRIVATE ${CHASEPATH}/chase/lib
    PRIVATE ${CHASEPATH}/third_party/antlr4/lib
    )
 
# Set rpath for the Python module (installed in chase/lib)
if(APPLE)
    set_target_properties(pychase_DSL PROPERTIES
        INSTALL_RPATH "@loader_path;@loader_path/../../third_party/antlr4/lib"
    )
elseif(UNIX)
    set_target_properties(pychase_DSL PROPERTIES
        INSTALL_RPATH "\$ORIGIN;\$ORIGIN/../../third_party/antlr4/lib")
endif()

install(TARGETS pychase_DSL
    EXPORT pychaseTargets
    DESTINATION chase/lib)

add_custom_target(install_DSL_tool
        "${CMAKE_COMMAND}" --build "${CMAKE_BINARY_DIR}" --target install
        DEPENDS ${dsl_tool}
        DEPENDS ${pychase_DSL}
        COMMENT "Installing the DSL Tool")
