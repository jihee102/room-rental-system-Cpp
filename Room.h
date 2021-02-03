//
// Created by jihee on 1/25/2021.
//

#ifndef RENTROOM_ROOM_H
#define RENTROOM_ROOM_H

#include <iostream>

class Room {
private:
    int room_number;
    std::string student_name;
    int price;
public:
    Room(int roomnumber, const std::string &student_name, int price);

    virtual ~Room();

    int get_room_number() const;

    const std::string &get_student_name() const;

    int get_price() const;

    void print_room(std::ostream & out) const;

};


#endif //RENTROOM_ROOM_H
