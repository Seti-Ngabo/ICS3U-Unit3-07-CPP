// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Seti Ngabo
// Created on: Sept 2021
// This program tells you if you can marry my grandchild

#include <iostream>

int main() {
    // this function checks if you qualify to date my daughter
    std::string user_looking;
    std::string user_wealth;


    // input
    std::cout << "Are you rich?(yes or no): ";
    std::cin >> user_wealth;
    std::cout << "Are you good looking?(yes or no): ";
    std::cin >> user_looking;

    // process and output
    if (user_wealth == "yes" && user_looking == "yes") {
        std::cout << "\nYou are accepted to date my grandchild.";
    } else if (user_wealth == "no" || user_looking == "no") {
        std::cout << "\nNot accepted, come back when you get rich.";
    } else {
        std::cout << "\nInvalid inputs, try again.";
    }
    std::cout << "" << std::endl;
    std::cout << "\nThanks for checking.";

    std::cout << "" << std::endl;
    std::cout << "\nDone.";
}
