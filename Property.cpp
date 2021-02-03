//
// Created by jihee on 1/25/2021.
//

#include "Property.h"
int Property::increment = 1;

Property::Property(const std::string &address) : address(address), number(increment++) {}

Property::~Property() {
    std::cout << "Cleaning " << address << std::endl;

}

int Property::get_number() const {
    return number;
}

void Property::print_property(std::ostream &out) const {
    out << get_number() << ") ";
}

const std::string &Property::get_address() const {
    return address;
}



