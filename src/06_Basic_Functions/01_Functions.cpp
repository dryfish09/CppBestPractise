/*
Author: dryfish09
License: The Unlicense
*/
#include <iostream>
#include <string>
// create a function:
void sayHello() {
    std::cout << "Hello there!" << std::endl;
}
// function with parameter
void helloName(std::string name) {
    std::cout << "hello, " << name << "!" << std::endl;
}
int main() {
    // call function:
    sayHello();
    // car with a parameter:
    helloName("Ann");
    return 0;
}
