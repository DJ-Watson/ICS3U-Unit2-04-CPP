// Copyright (c) 2019 DJ Watson All Rights Reserved
//
// Created by DJ Watson
// Created on September 2019
// this program calculates the cost of a pizza given diameter


#include <iostream>
#include <iomanip>


int main() {
    // variables
    const float LABOR = 0.75;
    const float RENT = 1.00;
    const float CPI = 0.50;
    const float HST = 0.13;
    float diameter;
    float subtotal;
    float total;
    // input
    std::cout << "Enter the diameter of the pizza you would like (inch): ";
    std::cin >> diameter;
    // process
    subtotal = LABOR + RENT + (diameter * CPI);
    total = subtotal + (subtotal * HST);
    // output
    std::cout << "" << std::endl;
    std::cout << "cost for a " << diameter << " inch pizza: $"
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << total << "." << std::endl;
}
