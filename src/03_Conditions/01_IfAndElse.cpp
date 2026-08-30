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
        std::cout << "you younger than 13 years old." << std::endl;
    }
    int score = 40;
    bool isAlive = true; //  new variable: bool (boolean). Only true and false.
    if (score > 50 && isAlive) {
        std::cout << "You win!" << std::endl; // only print out when score HIGHER 50 AND isAlive = true
    }
    else if (score <= 50 && isAlive) {
        // only print when score < or = 50 and isAlive = true
        std::cout << "You still alive, but your score doesn't enough" << std::endl;
    }
    else if (!isAlive) {
        // only print when isAlive  = false
        std::cout << "you died" << std::endl;
    } else {
        std::cout << "unknown condition" << std::endl;
    }
    return 0;
}
/*
Comparison Syntax:
conditions (cond)
- var1 == var2 (or values): equal
- var1 != var2 (or values): not equal
- var1 < var2: lower/smaller
- var1 > var2: higher/bigger
- var1 <= var2: smaller/lower or equal
- var2 >= var2: bigger/higher or equal
- cond1 && cond2: and
- cond1 || cond2: or

Meaning:
- var: variables
- cond: condition
REMEMBER: use '==' for 'if' or 'else if' condition, not '='
*/
