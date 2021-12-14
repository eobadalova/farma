#include "dog.h"
#include <iostream>
using namespace std;

Dog::Dog(string name, double weight, double heigth):IAnimal(name, weight), heigth(heigth)
{

}

void Dog::makeANoise()
{
    cout << this->getName() << ":wof wof" << endl;
}

double Dog::getHeigth() const
{
    return heigth;
}

