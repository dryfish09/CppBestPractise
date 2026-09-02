#include <iostream>
#include <string>
int main() { 
    std::string thingsOnMyBag[] = {
        "Book",
        "Calculator",
        "Notebook"
    };
    // for but for array
    std::cout << "There are things on my bag:" << std::endl;
    for (std::string stuff : thingsOnMyBag) {
        std::cout << "- " << stuff << std::endl;
    }
    return 0;
}
