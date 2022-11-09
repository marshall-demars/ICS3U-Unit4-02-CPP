// Copyright (c) 2022 Marshall Demars All rights reserved

// Created by: Marshall Demars
// Created on: Nov 2022
// This program calculates factorials

#include <iostream>

int main() {
    // This program calculates factorials

    int integerAsInt;
    int counter = 1;
    int factorialProduct = 1;
    std::string integerAsString;

    // Input
    std::cout << "Enter a positive number: ";
    std::cin >> integerAsString;
    std::cout << "" << std::endl;

    // Process and Output
    try {
        integerAsInt = std::stoi(integerAsString);

        if (integerAsInt < 0) {
            std::cout << "Please enter a positive number." << std::endl;
        } else {(integerAsInt > 0);
            do {
                factorialProduct = factorialProduct * counter;
                counter = counter + 1;
            } while (counter <= integerAsInt);
                std::cout << "The product of all positive numbers from 1 to "
                          << integerAsString << " is "
                          << factorialProduct << "." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid input." << std::endl;
    }

    std::cout << ("\nDone.") << std::endl;
}
