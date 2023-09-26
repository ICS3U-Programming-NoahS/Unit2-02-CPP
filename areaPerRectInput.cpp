// Copyright (c) 2023 Noah Smith All rights reserved.
//
// Created by: Noah Smith
// Created on: Sept. 26th, 2023
// This program asks the user for the length
// and width of a rectangle in cm.
// It then calculates and displays the area and perimeter.
#include <iostream>

// declare variables
float length, width, area, perimeter;

int main() {
    // get the length and the width from the user
    std::cout << "Today we will calculate the area and" << std::endl;
    std::cout << "perimeter of a rectangle." << std::endl;
    std::cout << "Enter the length (cm): " << std::endl;
    std::cin >> length;
    std::cout << "Enter the width (cm): " << std::endl;
    std::cin >> width;

    // calculate the area and perimeter of the rectangle
    area = length * width;
    perimeter = 2 * (length + width);

    // display the area and perimeter to the user
    std::cout << std::endl;
    std::cout << "Area = " << area << " cm^2.\n";
    std::cout << "Perimeter = " << perimeter << "cm.\n";
}
