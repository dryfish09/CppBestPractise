/*
File name: IntegerTypes.cpp
License: The Unlicense
*/
#include <iostream>
int main() {
    // int - archive normal number, for normal use.
    int favouriteNumber = 36;
    std::cout << "my favourite numberis: " << favouriteNumber << std::endl;
    // short - only archive small number (like age, classroom on your school, etc)
    short myAge = 13;
    std::cout << "my age is: " << myAge << std::endl;
    // long - to archive long number
    long lineOfCodes = 2323L; // needs L suffix after values
    std::cout << "this pull request has " << lineOfCodes << " line of codes" << std::endl;
    // long long - to archive VERY LONG number (like my ORCID id)
    long long myORCID = 234567876987LL; // example only, lol, it needs LL suffix
    std::cout << "my ORCID: " << myORCID << std::endl;
    // use 'unsigned' keyword if your values needs unsigned
    unsigned long unsignedStuff = 2323L;
    std::cout << unsignedStuff << std::endl;
    return 0;
}
