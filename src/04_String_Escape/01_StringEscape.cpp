/*
filename: StringEscape.cpp
license: The Unlicense
*/
#include <iostream>
#include <string>
int main() {
    std::cout << "Hi there!\n"; // '\n' will creates new line (like std::endl, but it's faster)
    // endl = '\n' + flush() so it's slower.
    std::string greeting = "hello\n I'm don\n"; // also work with string
    std::cout << greeting;
    // tab escape:
    std::cout << "hi\tthere" << std::endl; //output: hi   there
    // unicode escape
    std::string obfuscatedText = "\u0054\u0068\u0069\u0073\u0020\u006C\u0069\u006E\u0065\u0020\u0068\u0061\u0073\u0020\u0062\u0065\u0065\u006E\u0020\u006F\u0062\u0066\u0075\u0073\u0063\u0061\u0074\u0065\u0064";
    std::cout << obfuscatedText << std::endl;
    return 0;
}
/*
Escape syntax:
- \t: tab
- \n: new line (enter)
- \b: backspace 
- \uXXXX: unicode escape (X is a number)
- \\: backslash
- \': single qoute
- \": double qoute
*/
