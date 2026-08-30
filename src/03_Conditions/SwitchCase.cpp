/*
file name: SwitchCase.cpp
license: unlicense
*/
#include <iostream>
int main() {
    int day = 1;
    // code works ok with if, else if, else. And what if we have 20+ conditions but can't skip? There're a shorter way:
    switch (day) {
        case 1: std::cout << "Monday" << std::endl; // if day = 1, print "Monday"
        break; // break - exit this case, if you don't have this, program will fall-through to other case
        case 2: std::cout << "Tuesday" << std::endl;
        break;
        default: std::cout << "Invalid day!!" << std::endl;
        break;
        // add more here, it's same
        // float only works with int, char, enum, short, long, long long. It doesn't work with other variable type!
    }
    return 0;
}
/*
when to use switch:
- Comparing a variable against MULTIPLE specific values
- Values ​​are integers or characters

when to use if-else:
- Comparing against a RANGE of values ​​(>=, <=)
- Complex conditions (&&, ||)
- Comparing float, double, or string types
*/
