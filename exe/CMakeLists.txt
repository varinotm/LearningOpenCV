# Define target application executable and the list of source and header files
add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}_staticLib)