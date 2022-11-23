// Copyright (c) 2022 maliksalem1
//
// Created by: maliksalem1
// Created on: Oct 2022
// This program uses for while loops

#include <iostream>
#include <string>

    float positiveFloat;
    int positiveInteger;
    int loopCounter = 0;
    int multiplyInt = 1;
    int squaredNumber;
    std::string positiveString;

int main() {
    // This function finds the square of all positive integers

    // Input

    std::cout << "Enter an integer >= 0: ";
    std::cin >> positiveString;
    std::cout << std::endl;

    // Process and output
    try {
        positiveFloat = std::stof(positiveString);
        positiveInteger = positiveFloat;
        if (positiveInteger == positiveFloat) {
            if (positiveInteger >= 0) {
    for (int loopCounter = 0; loopCounter <= positiveInteger; loopCounter++) {
                    squaredNumber = loopCounter * loopCounter;
                    std::cout << "" << loopCounter << "²"
                              << " = " << squaredNumber << std::endl;
                }
            } else {
                std::cout << "" << positiveInteger
                          << " is not a positive integer" << std::endl;
            }
        } else {
            std::cout << "" << positiveFloat
                      << " is not an integer" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "" << positiveString
                  << " is not a valid input." << std::endl;
    }

    std::cout << "\nDone.";
}
