#include <iostream>
#include "ianimal.h"
#include "dog.h"
#include "farmtemplate.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    IAnimal * zviera = new Dog("Aayla",20, 40);
    zviera->makeANoise();

    IAnimal * zviera2 = new Cat("Felix",5);
    zviera2->makeANoise();

    FarmTemplate<Dog*> pesfarma;

    pesfarma += new Dog("Argo", 15,20);
    pesfarma.wakeUp();

    cout << "" << endl;

    FarmTemplate<IAnimal*> farma;
    farma += new Dog("Rex",50,50);
    farma += new Cat("Riska",4);
    farma.wakeUp();

    return 0;
}
