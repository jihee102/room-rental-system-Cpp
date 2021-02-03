cmake_minimum_required(VERSION 3.17)
project(RentRoom)

set(CMAKE_CXX_STANDARD 14)

add_executable(RentRoom main.cpp Property.cpp PropertyAdmin.cpp StudentHouse.cpp Room.cpp Room.h Apartment.cpp Apartment.h util.cpp util.h)
configure_file(rooms.txt rooms.txt COPYONLY)
configure_file(rooms2.txt rooms2.txt COPYONLY)
