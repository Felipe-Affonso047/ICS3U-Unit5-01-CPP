// Copyright (c) 2021 Felipe Affonso All rights reserved
//
// Created by: Felipe Affonso
// Created on: May 2021
// This program add positive numbers

#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>

void Fahrenheit() {
    float celsius;
    float fahrenheitOutput;

    std::cout << "Insert degrees in celsius: ";
    std::cin >> celsius;

    fahrenheitOutput = (celsius * 9 / 5) + 32;

    std::cout << celsius << " C = " << fahrenheitOutput << " F" << std::endl;
}


int main() {
    // This is the main function
    try {
        Fahrenheit();
    } catch (std::invalid_argument) {
        std::cout <<
        "\nThis input is invalid, please, insert a number."
        << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
