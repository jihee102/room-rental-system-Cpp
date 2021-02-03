//
// Created by jihee on 1/25/2021.
//

#include "Room.h"


Room::Room(int room_number, const std::string &student_name, int price) : room_number(room_number),
                                                                        student_name(student_name), price(price) {}

Room::~Room() {
    std::cout << "Cleaning " << room_number << std::endl;
}

int Room::get_room_number() const {
    return room_number;
}

const std::string &Room::get_student_name()  const {
    return student_name;
}

int Room::get_price() const {
    return price;
}

void Room::print_room(std::ostream &out) const {
    out<< "Room "<< room_number <<" rented to "<< student_name << "with price "<< price;
}

