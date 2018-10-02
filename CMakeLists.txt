cmake_minimum_required(VERSION 3.12)
project(rbtree)

set(CMAKE_CXX_STANDARD 14)

add_executable(rbtree src/main.cpp tree/tree.cpp tree/tree.h rbtree/rbtree.cpp)