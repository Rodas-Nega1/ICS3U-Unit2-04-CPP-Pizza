// Copyright (c) 2021 Rodas Nega All rights reserved.
//
// Created by: Rodas Nega
// Created on: Sep 2021
// This program calculates the cost of pizza

#include <iostream>
#include <iomanip>

int main() {
    // This function calculates the cost of a pizza
    const float RENT = 1;
    const float LABOUR = 0.75;
    const float COST_PER_INCH = 0.5;
    const float HST = 0.13;

    float size;
    float sub_total;
    float total;

    // input
    std::cout << "What size of pizza would you like? (inch): ";
    std::cin >> size;

    // process
    sub_total = RENT + LABOUR + (size * COST_PER_INCH);
    total = sub_total * (1 + HST);

    // output
    std::cout << "The final cost is: $" << std::fixed
    << std::setprecision(2) << std::setfill('0') << total << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
