/*
file name: TypeCasting.cpp
license: The Unlicense
NOTE: dynamic_cast will have with OOP.
*/
#include <iostream>
int main() {
    // int -> double
    int ten = 10; // ten in english is 10
    double infiniteFloat = static_cast<double>(maxPoint) / 3;
    std::cout << ten << ": 3 = " << infiniteFloat << std::endl;
    // double -> int
    double pi = 3.14159;
    int intergerPi = static_cast<int>(pi);
    std::cout << "interger type of " << pi << "is " << intergerPi << std::endl;
    return 0;
}
