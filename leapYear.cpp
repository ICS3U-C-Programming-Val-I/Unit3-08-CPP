// Copyright (c) 2023 Val I All rights reserved.
//
// Created by: Val
// Created on: Nov 1, 2023
// This program asks the user for a year then tells
// them if its a leap year.

#include <iostream>
#include <string>

int main() {
    // Input - getting year
    // declaring variable yearStr
    std::string yearStr;
    std::cout << "Enter a year: ";
    std::cin >> yearStr;

    try {
        int yearInt = std::stoi(yearStr);
        // process - checks if year is leap or not
        if (yearInt % 4 == 0) {
            if (yearInt % 100 == 0) {
                if (yearInt % 400 == 0) {
                    // Output - Displays result
                    std::cout << yearInt << " is a leap year\n";
                } else {
                    // Output - Displays result
                    std::cout << yearInt << " is not a leap year\n";
                }
            } else {
                // Output - Displays result
                std::cout << yearInt << " is a leap year\n";
            }
        } else {
            // Output - Displays result
            std::cout << yearInt << " is not a leap year\n";
        }
    } catch (std::invalid_argument) {
        std::cout << yearStr << "' is not a valid year\n";
    }
}
