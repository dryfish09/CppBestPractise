/*
Filename: DoWhile.cpp
license: The Unlicense
*/
#include <iostream>
int main() {
    // do-while loop - do ... when ...
    int j = 0;
    do {
        // code to execute here
        j++;
        std::cout << "Loop attempt: " << j << std::endl;
    } while (j < 5);
    return 0;    
}
/*
do-while syntax:
do {
    // code here
}
while (condition);
*/
