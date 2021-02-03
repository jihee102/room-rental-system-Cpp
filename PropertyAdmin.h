//
// Created by jihee on 1/25/2021.
//

#ifndef RENTROOM_PROPERTYADMIN_H
#define RENTROOM_PROPERTYADMIN_H


#include <memory>
#include <map>
#include "Property.h"
#include "Apartment.h"

class PropertyAdmin {
private:
    std::map<std::string, std::shared_ptr<Property>> properties;

public:
    PropertyAdmin();

    virtual ~PropertyAdmin();

    std::shared_ptr<Property> find_property(const std::string & address) const;


    void add_apartment(const std::string &address, int surface) ;

    void add_student_house(const std::string &address, const std::string &name);

    void add_room_in_student_house(const std::string &address, int room_number, const std::string &student_name, int price);

    const std::shared_ptr<Property> find_largest_revenue() const;

    void print_all_properties(std::ostream & out) const;
};


#endif //RENTROOM_PROPERTYADMIN_H
