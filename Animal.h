#include <iostream>
#include <stdlib.h>
#include <string>

class Animal
{
public:
    Animal(const std::string &speciesName, unsigned int discoveryYear);

    Animal();

    void display();

private:
    std::string species;
    unsigned int year_discovered;
};
