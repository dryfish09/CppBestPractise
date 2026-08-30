/*
filename: HelloWorldBasic.cpp
license: Unlicense
purpose: educational only, not production ready.
*/
#include <iostream> // required, to print out the screen.
using namespace std; // shorter way to call function from imported library (like this, iostream)
// if you don't have this, you should write std::cout, std::cin.
int main() {
    // main is entry point, required for any program.
    cout << "Hello, World!" << endl; // endl create new line
    return 0; // exit with code 0 (success, no error)
}
