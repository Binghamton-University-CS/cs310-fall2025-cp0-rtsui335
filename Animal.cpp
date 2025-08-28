#include "Animal.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
// move species and year discoeverd
// scopes specifer
Animal::Animal(const string &speciesName, unsigned int discoveryYear) // Animal::is constructor but need to write that outside of the class
{
    species = speciesName;
    year_discovered = discoveryYear;
}

Animal::Animal() : species(""), year_discovered(0) {}; // tells the compiler that this class belongs to animal class

void Animal::display()
{
    cout << species << " [" << year_discovered << "]" << endl;
}
