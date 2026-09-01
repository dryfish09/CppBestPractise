/*
Author: dryfish09
License: The Unlicense
*/
#include <iostream>
#include <string>
int main() {
    // string arrays - store multiple string values
    // like integer array, but we use 'std::string' instead 'int' and the string instead number on the values.
    std::string languages[3] = {
        "Vietnamese",
        "English",
        "French"
    }; // requires ';' after this.
    // access:
    std::cout << "today i'm learning " << languages[1] << std::endl; // languages[1] = English
    return 0;
}
