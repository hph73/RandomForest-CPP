cmake_minimum_required(VERSION 3.10)
project(RandomForest)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
set(LIBS Threads::Threads)

set(CMAKE_CXX_FLAGS "-O3")

set(CMAKE_CXX_STANDARD 11)

add_executable(RandomForest main.cpp include/Data.h src/Data.cpp
        src/DecisionTree.cpp include/DecisionTree.h src/DecisionTree.cpp
        include/RandomForest.h src/RandomForest.cpp include/ThreadsPool.h)

target_link_libraries(RandomForest  ${LIBS})
