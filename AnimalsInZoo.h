#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class AnimalsInZoo
{
public:
    AnimalsInZoo();                // will be the default constructor
    AnimalsInZoo(const Animal &a); // constructor with one animal
    void display();                // display

private:
    int numAnimals;
    Animal animal;
};