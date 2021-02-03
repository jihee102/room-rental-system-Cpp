//
// Created by jihee on 1/25/2021.
//

#ifndef RENTROOM_PROPERTY_H
#define RENTROOM_PROPERTY_H

#include <iostream>

class Property {
private:
    static int increment;
    int number;
    std::string address;

public:
    Property(const std::string &address);

    virtual ~Property();

    int get_number() const;

    const std::string &get_address() const;

    virtual void print_property(std::ostream & out) const;
};


#endif //RENTROOM_PROPERTY_H
