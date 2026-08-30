/*
Filename: Enum.cpp
License: The Unlicense
*/
#include <iostream>
#include <string>
// enum is a list of variables, good for logging (logging libraries use this), etc.
// basic example, we use scoped enum.
enum class Color {
    RED,
    BLUE,
    GREEN
};
// enum with its value
enum class Status : int {
    OK = 200,
    NOT_FOUND = 404
};
// to change enum into string, you need to write a "parser"
std::string enumToString (Color c) {
        
    switch (c) {
        case Color::RED:
        return "Red";
        case Color::BLUE:
        return "Blue";
        case Color::GREEN:
        return "Green";
        default:
        return "Unknown";
    }
}
int main() {
    Color myColor = Color::RED; // SHOULD use Color::RED
    // change color to string:
    Color myColor = enumToString(Color::RED);
    std::cout << "my color: " << myColor << std::endl;
    // type casting (to use status)
    Status HTTPS_STATUS = Status::OK;
    std::cout << "ok status code is: " << static_cast<int>(HTTPS_STATUS) <<std::endl;
    return 0;
}
