#include <iostream>
// required:
#include <vector>
int main() {
    // vector - smarter arrays
    std::vector<int> numbers = {1, 2, 3};
    // add item:
    numbers.push_back(4);
    numbers.push_back(5);
    // remove item:
    numbers.pop_back(5);
    // access to it (like arrays!)
    std::cout << numbers[0] << endl;
    return 0;
}
