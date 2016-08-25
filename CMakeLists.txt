cmake_minimum_required(VERSION 2.6)
SET(CMAKE_CXX_FLAGS "-std=c++11")


# Boost
FIND_PACKAGE(Boost COMPONENTS system filesystem thread)
INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

# OpenCV Config
find_package(OpenCV REQUIRED)

INCLUDE_DIRECTORIES(${OpenCV_INCLUDE_DIRS})
LINK_DIRECTORIES(${OpenCV_LIB_DIR})

ADD_DEFINITIONS(-DDEBUG -ggdb -O3 -Wall -D_FILE_OFFSET_BITS=64 -D_LARGEFILE_SOURCE -ffast-math -fbranch-probabilities)

set(SRCS
  lib/ldb/ldb.cpp
  src/OpenABLE.cpp
  src/dbscan.cpp
)

ADD_EXECUTABLE(
  FastABLE_vs_OpenABLE
  FastABLE_vs_OpenABLE.cpp 
  ${SRCS}
)

TARGET_LINK_LIBRARIES(
  FastABLE_vs_OpenABLE
  ${OpenCV_LIBS}
  ${Boost_LIBRARIES}
)

################################

#foreach(dir ${DIRS})
#  FILE(GLOB files ${dir}/*.h*)
#  LIST(APPEND h_files ${files})
#endforeach(dir)
#add_custom_target(TAGS etags --members -l c++ ${h_files} ${SRCS})