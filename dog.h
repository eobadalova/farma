#ifndef DOG_H
#define DOG_H
#include <string>
#include "ianimal.h"
using namespace std;

class Dog : public IAnimal
{
public:
    Dog(string name, double weight, double heigth);

    virtual void makeANoise() override; //toto je funkcia ktorá prekrýva nejakú virtuálnu

    double getHeigth() const;

protected:
    double heigth;
};

#endif // DOG_H
