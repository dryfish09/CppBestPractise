/*
File name: Const.cpp
License: The Unlicense
*/
#include <iostream>
int main() {
    // 'const' keyword in C++ is like 'val' in Kotlin:
    const float pi = 3.14f; // can't change this. In this example, 'float' is enough
    // if you try to change it, compiler will be angry and throw an error.
    // print (use) it:
    std::cout << "3 first number of pi is: " << pi << std::endl;
    return 0;
}
