// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Andrew Ten-Den
// Created on: April 2022
// This program prints out the corresponding day


#include <iostream>
#include <string>


int main() {
    // this function prints out the corresponding day
    std::string dayNumberAsString;
    int dayAsInt;

    // input
    std::cout << "Enter the number of a day (ex: 3 for Tuesday): ";
    std::cin >> dayNumberAsString;

    // process and output
    try {
        dayAsInt = std::stoi(dayNumberAsString);
        switch (dayAsInt) {
            case 1 :
                std::cout << "Sunday" << std::endl;
                break;
            case 2 :
                std::cout << "Monday" << std::endl;
                break;
            case 3 :
                std::cout << "Tuesday" << std::endl;
                break;
            case 4 :
                std::cout << "Wednesday" << std::endl;
                break;
            case 5 :
                std::cout << "Thursday" << std::endl;
                break;
            case 6 :
                std::cout << "Friday" << std::endl;
                break;
            case 7 :
                std::cout << "Saturday" << std::endl;
                break;

            default :
                std::cout << "Invalid month" << std::endl;
        }
    } catch (std::invalid_argument) {
            std::cout << "No idea!";
    }
    std::cout << "\nDone." << std::endl;
}
