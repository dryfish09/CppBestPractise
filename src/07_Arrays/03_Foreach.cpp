#include <iostream>
#include <string>
int main() { 
    std::string thingsOnMyBag[] = {
        "Book",
        "Calculator",
        "Notebook"
    };
    // for but for array
    for (std::string stuff : thingsOnMyBag) { 
        std::cout << "There are things on my bag: " << stuff << std::endl;
    }
    return 0;
}
