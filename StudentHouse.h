//
// Created by jihee on 1/25/2021.
//

#ifndef RENTROOM_STUDENTHOUSE_H
#define RENTROOM_STUDENTHOUSE_H


#include <memory>
#include <map>
#include "Property.h"
#include "Room.h"

class StudentHouse : public Property{
private:
    std::string name;
    std::map<int, std::shared_ptr<Room>> room_list;

public:
    StudentHouse(const std::string &address, const std::string &name);

    virtual ~StudentHouse();

    int get_total_revenue() const ;

    void print_property(std::ostream &out) const override;

    void add_room(int &room_Number, const std::string &student_name, int &price) ;

    void delete_room(int &roon_number) ;

    std::shared_ptr<Room> find_room(int &room_number) const;

};


#endif //RENTROOM_STUDENTHOUSE_H
