#include <iostream>
#include "PropertyAdmin.h"
#include "util.h"

int main() {

    PropertyAdmin propertyAdmin;

    try{
        propertyAdmin.add_apartment("One Infinite Loop",95);
        propertyAdmin.add_apartment("1600 Amphitheatre Parkway",65);
        propertyAdmin.add_apartment("One Microsoft Way",45);
        propertyAdmin.add_student_house("500 Oracle Parkway","Java Programmer");
        propertyAdmin.add_student_house("One New Orchard Road","IBM fans");

        read_rooms_for_student_house(propertyAdmin, "500 Oracle Parkway", "rooms.txt");
        read_rooms_for_student_house(propertyAdmin, "One New Orchard Road", "rooms2.txt");

        propertyAdmin.print_all_properties(std::cout);
    } catch (std::exception &exception) {
        std::cerr << exception.what() <<std::endl;
    }

    return 0;
}
