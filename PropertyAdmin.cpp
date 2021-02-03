//
// Created by jihee on 1/25/2021.
//

#include "PropertyAdmin.h"
#include "StudentHouse.h"

PropertyAdmin::PropertyAdmin() {}

PropertyAdmin::~PropertyAdmin() {

}


std::shared_ptr<Property> PropertyAdmin::find_property(const std::string &address) const {
    auto iterator = properties.find(address);
    return iterator == properties.cend()? nullptr: iterator->second;
}


void PropertyAdmin::add_apartment(const std::string &address, int surface) {
    auto property = find_property(address);
    if(property){
        throw std::runtime_error("The property with the address already exist!");
    }

    auto apartment = std::make_shared<Apartment>(address,surface);

    properties[address] = apartment;

}

void PropertyAdmin::add_student_house(const std::string &address, const std::string &name) {
    auto property = find_property(address);

    if(property){
        throw std::runtime_error("The property with the address already exist!");
    }

    auto student_house = std::make_shared<StudentHouse>(address, name);

    properties[address] = student_house;

}

void PropertyAdmin::add_room_in_student_house(const std::string &address, int room_number, const std::string &student_name,
                                              int price) {

    auto property = find_property(address);

    if(!property){
        throw std::runtime_error("The property with the address doesn't exist!");
    }

    auto student_house = std::dynamic_pointer_cast<StudentHouse>(property);

    if(!student_house){
        throw std::runtime_error("The property is not a student house : "+address);
    }

    student_house->add_room(room_number, student_name, price);
}


const std::shared_ptr<Property> PropertyAdmin::find_largest_revenue() const {
    std::shared_ptr<StudentHouse> largest ;
    int revenue =0;

    for(auto iterator: properties){
        auto student_house = std::dynamic_pointer_cast<StudentHouse>(iterator.second);
        if(student_house){
            if(revenue < student_house->get_total_revenue()){
                largest = student_house;
                revenue = student_house->get_total_revenue();
            }
        }
    }

    return revenue==0? nullptr: largest;
}



void PropertyAdmin::print_all_properties(std::ostream &out) const {
    out << "Overview of all properties" << std::endl;
    for(auto iterator = properties.cbegin(); iterator != properties.cend() ;++iterator ){
        iterator->second->print_property(out);
        out << std::endl;
    }

    if(find_largest_revenue()!= nullptr){
        out << std::endl;
        out << "The student house with the largest revenue is: "<< std::endl;
        find_largest_revenue()->print_property(out);
        out<<std::endl;

    }
}

