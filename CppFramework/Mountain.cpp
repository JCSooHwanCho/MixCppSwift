//
//  Mountain.cpp
//  CppFramework
//
//  Created by 김인섭 on 10/21/23.
//

#include "Mountain.hpp"
#include <iostream>

Mountain::Mountain(std::string name, double height) {
    this->name = name;
    this->height = height;
}

void Mountain::displayInfo() {
    std::cout << "Mountain Name: " << name << std::endl;
    std::cout << "Height: " << height << " meters" << std::endl;
}

void Mountain::setHeight(double height) {
    this->height = height;
}
