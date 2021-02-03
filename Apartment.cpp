//
// Created by jihee on 1/25/2021.
//

#include "Apartment.h"

Apartment::Apartment(const std::string &address, int surface) : Property(address), surface(surface) {}

Apartment::~Apartment() {
    std::cout << "Cleaning " << get_address() << std::endl;

}

void Apartment::print_property(std::ostream &out) const {
    Property::print_property(out);
    out<< get_address() << " with surface area "<< surface;
}
