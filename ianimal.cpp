#include "ianimal.h"
using namespace std;

IAnimal::IAnimal(string name, double weight):name(name), weight(weight)
{}

string IAnimal::getName() const
{
    return name;
}

double IAnimal::getWeight() const
{
    return weight;
}


