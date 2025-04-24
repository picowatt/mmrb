# CMakeList.txt : CMake project for MemoryMappedRingBuffer, include source and define
# project specific logic here.
#

find_package(Boost REQUIRED CONFIG COMPONENTS interprocess)

# Add source to this project's executable.
add_executable (mmrb 
"src/mmrb.cpp" 
"include/mmrb/mmrb.h"
)
target_include_directories(mmrb
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)
target_link_libraries(mmrb PRIVATE Boost::interprocess)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET mmrb PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
