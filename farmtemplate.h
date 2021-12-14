#ifndef FARMTEMPLATE_H
#define FARMTEMPLATE_H
#include "ianimal.h"
#include "cat.h"
#include "dog.h"
#include <vector>
using namespace std;

template <class T>
class FarmTemplate // šablonová treida nema definiciu v cpp subore
{
public:
    void wakeUp();

    template <class jezisko, class santa>
    friend void operator += (FarmTemplate<jezisko> &d, santa * z);

protected:
    //T * zvieratka[10];
    vector<T> zvieratka;
};

template <class T>
void FarmTemplate<T>::wakeUp(){
    for(auto z: zvieratka) {
        z->makeANoise();
    }
}

template <class jezisko, class santa>
void operator+=(FarmTemplate<jezisko> &d, santa * z){
    d.zvieratka.push_back(z);
}

#endif // FARMTEMPLATE_H
