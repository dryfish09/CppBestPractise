/*
File name: IfAndElse.cpp
License: The Unlicense
*/
#include <iostream>
int main() {
    int age = 13;
    // if condition, to check if condition is correct as expected, do something
    if (age == 13) {
        std::cout << "you're 13 years old" << std::endl;
    }
    // else if - another if condition
    else if (age > 13) {
        std::cout<< "you're older than 13 years old" <<std::endl;
    } else {
        // else - if all check failed, do this
        std::cout << "you younger than me" << std::endl;
    }
    return 0;
}
