// Copyright (c) Jessah All rights reserved.
//
// Name Jessah
// 01/12/2022
// This program ask the user for a number and it will
// After ask for more numbers to add up until it reaches
// The initial number

#include <iostream>

int main() {
// initialize variables and counters
    int sum = 0;
    int counter = 0;
    int userInitialNum, userAddedNum;
    std::string userInitialNumStr, userAddedNumStr;
    float userInitialFloat, userAddedFloat;
// ask for the how many number does the user wan to add
    std::cout << "How many numbers do you want to add?: ";
    std::cin >> userInitialNumStr;
    std::cout << "" << std::endl;
// catch any strings,floats
    try {
        userInitialNum = std::stoi(userInitialNumStr);
        userInitialFloat = std::stof(userInitialNumStr);

        if (userInitialFloat != userInitialNum) {
            std::cout << "invalid input" <<std::endl;
        } else if (userInitialNum <= 0) {
            std::cout << "invalid input"
            << std::endl;
        } else {
// while the counter is under initial num
// ask the user for numbers to add
            while (counter < userInitialNum) {
                std::cout << "What number do you want to add? ";
                std::cin >> userAddedNumStr;

                try {  // check if added number is valid
                    userAddedNum = std::stoi(userAddedNumStr);
                    userAddedFloat = std::stof(userAddedNumStr);
                } catch (std::invalid_argument) {
                }

                if (userAddedFloat != userAddedNum) {
                    std::cout << "Invalid input"
                    << std::endl;
                    // if the added num is valid
                    // counter is added by one
                    // and the added num is put in the sum
                } else if (userAddedNum > 0) {
                    counter = counter + 1;
                    sum = sum + userAddedNum;
                    std::cout << userAddedNum
                              << " was added" << std::endl;
                    // when the counter reaches initial num
                    // it continues
                    if (counter > userInitialNum) {
                        continue;
                    }
                } else {
                    std::cout << "invalid input" << std::endl;
                }
                }
            }
            // display the sum of numbers
            std::cout << "The overall sum of numbers is "
                      << sum;
        } catch (std::invalid_argument) {
            std::cout << "Invalid input";
        }
}
