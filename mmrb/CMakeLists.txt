# CMakeList.txt : CMake project for MemoryMappedRingBuffer, include source and define
# project specific logic here.
#

find_package(Boost REQUIRED CONFIG COMPONENTS interprocess)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add source to this project's executable.
add_library (mmrb 
"include/mmrb/RingBuffer.h"
"src/mmrb.cpp"
 )
 add_library(i::buffer ALIAS mmrb)

target_include_directories(mmrb
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        ${Boost_INCLUDE_DIRS}
)

target_link_libraries(mmrb PRIVATE Boost::interprocess)

