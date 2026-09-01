/*
author: dryfish09
license: The Unlicense
*/
#include <iostream>
#include <string>
int main() {
    // 3 ways for creating an integer array
    // way 1: just declare
    int scores[10];
    // way 2: declare and fill with your custom values:
    int smallNumber[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // way 3: declare, fill your custom values, C++ will caculate how many values in it
    int bigNumber[] = {100, 200, 400};
    // access to it:
    std::cout << "my score is: " << scores[0] << std::endl; // array starts at 0, ends at max value declared - 1, like max value is 9, but it's 8.
    // you can access to array by variables:
    int myNumber = smallNumber[8]; // 9
    std::cout << "my number is " << myNumber << std::endl;
    std::cout << "big number: " << bigNumber[2] << std::endl;
    return 0;
}
