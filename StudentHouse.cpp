//
// Created by jihee on 1/25/2021.
//

#include "StudentHouse.h"
StudentHouse::StudentHouse(const std::string &address, const std::string &name) : Property(address) , name(name){}

StudentHouse::~StudentHouse() {
    std::cout << "Cleaning " << get_address() << std::endl;

}



int StudentHouse::get_total_revenue() const {
    int total = 0;
    if(room_list.size() >0){
        for(auto &pair : room_list){
            auto room = pair.second;
            total += room->get_price();
        }
    }
    return total;
}

std::shared_ptr<Room> StudentHouse::find_room(int &room_number) const {
    auto iterator = room_list.find(room_number);
    return iterator == room_list.cend() ? nullptr: iterator->second;
}


void StudentHouse::add_room(int &room_Number, const std::string &student_name, int &price) {
    auto room = find_room(room_Number);
    if(room){
        throw std::runtime_error("The room number already exist!");
    }
    if(student_name.empty() || price ==0){
        throw std::runtime_error("Student name or price cannot be null");
    }

    auto new_room = std::make_shared<Room>(room_Number, student_name, price);

    room_list[new_room->get_room_number()] = new_room;
}


void StudentHouse::delete_room(int &room_number) {
    auto room = find_room(room_number);

    if(!room){
        throw std::runtime_error("The room number doesn't exist!");
    }

    room_list.erase(room_number);
}

void StudentHouse::print_property(std::ostream &out) const {
    Property::print_property(out);
    out<< get_address() << " with "<< name << " and total revenue "<< get_total_revenue() <<": ";
    out<< std::endl;
    if(room_list.size()>0){
        for(auto &pair: room_list){
            auto room = pair.second;
            room->print_room(out);
            out << std::endl;
        }
    }
}

