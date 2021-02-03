//
// Created by jihee on 1/25/2021.
//

#include <fstream>
#include "util.h"

void read_rooms_for_student_house(PropertyAdmin &admin ,const std::string &address, const std::string &filename) {
    std::ifstream input{filename};


    if(!input.is_open()){
        throw std::runtime_error("Unable to open " + filename);
    }

    for(;;){
        std::string student_name;
        int room_number, price;

        input >> student_name;
        if (student_name.empty() && input.eof()) {
            return;
        }

        input >> room_number >> price;

        admin.add_room_in_student_house(address, room_number,student_name,price);
    }
}
