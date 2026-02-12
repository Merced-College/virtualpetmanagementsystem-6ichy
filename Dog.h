#ifndef DOG_H
#define DOG_H

#include <string>
#include "Pet.h"

using namespace std;

class Dog : public Pet {
private:
    string breed;
public:
    // Constructors
    Dog();
    Dog(const string& name, const string& breed, int age, int hungerLevel);
    // Accessors
    string getBreed() const;
    // Mutators
    void setBreed(const string& breed);
    // Override makeSound
    void makeSound() const override;
};
#endif
