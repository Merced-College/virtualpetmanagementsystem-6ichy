#ifndef CAT_H
#define CAT_H

#include <string>
#include "Pet.h"

using namespace std;

class Cat : public Pet {
private:
    string species;
public:
    // Constructors
    Cat();
    Cat(const string& name, const string& species, int age, int hungerLevel);
    // Accessors
    string getSpecies() const;
    // Mutators
    void setSpecies(const string& species);
    // Override makeSound
    void makeSound() const override;
};
#endif