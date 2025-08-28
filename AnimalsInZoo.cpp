#include "AnimalsInZoo.h"
#include <iostream>
#include <string>
using namespace std;

AnimalsInZoo::AnimalsInZoo()
{
    numAnimals = 0;
}

AnimalsInZoo::AnimalsInZoo(const Animal &a)
{
    numAnimals = 1;
    animal = a;
}
void AnimalsInZoo::display()
{
    if (numAnimals > 0)
    {
        cout << "There are " << numAnimals << " Animals" << endl;
        animal.display();
    }
}
