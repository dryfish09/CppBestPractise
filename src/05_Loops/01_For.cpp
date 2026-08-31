/*
File name: For.cpp
License: The Unlicense
*/
#include <iostream>
int main () {
    // for loop - loop for ... times
    for (int i = 0; i <= 3; i++) {
        // loop body here
        std::cout << "looping " << i << " times" << std::endl; // repeat 4 times, because i starts at 0.
        // Loops 4 times: i = 0, 1, 2, 3
    }
    return 0;
}
