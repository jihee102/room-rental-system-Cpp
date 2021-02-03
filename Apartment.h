//
// Created by jihee on 1/25/2021.
//

#ifndef RENTROOM_APARTMENT_H
#define RENTROOM_APARTMENT_H


#include "Property.h"

class Apartment : public Property{
private:
    int surface;

public:
    Apartment(const std::string &address, int surface);

    virtual ~Apartment();

    void print_property(std::ostream &out) const override;
};


#endif //RENTROOM_APARTMENT_H
