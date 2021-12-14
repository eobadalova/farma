#ifndef IANIMAL_H
#define IANIMAL_H
#include <string>
using namespace std;

class IAnimal
{
public:
    IAnimal(string name, double weight);
    //funkcia sa dá prekryť hoci kedy
    // = 0 znamená že funkcia nemá žiadne telo -> abstraktná
    virtual void makeANoise() = 0; // prekladač predpokladá že sa bude prekrývať

    string getName() const;
    double getWeight() const;

protected:
    string name;
    double weight;

};

#endif // IANIMAL_H
