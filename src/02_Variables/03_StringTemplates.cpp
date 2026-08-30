/*
filename: StringTemplates.cpp
license: Unlicense
purpose: educational only, not production ready.
note: this code requires C++ 23+ version. 
  */
#include <print>
#include <string> // string is not a built-in variable type
#include <iostream> // to compare with print
using namespace std;
int main() {
    string name = "dryfish09";
    // old way:
    cout << "my name is: " << name << endl; // too long, BRUH
    // new way (if we don't need backward-compatibility)
    name = "stuff";
    println("also known as: {}", name);
    return 0;
}
	
