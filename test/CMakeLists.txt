﻿

project(test)

add_executable (test 
"main.cpp"
 )

 target_link_libraries (test PUBLIC i::buffer)
