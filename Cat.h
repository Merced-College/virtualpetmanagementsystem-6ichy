#ifndef CAT_H
#define CAT_H

#include <string>
#include "Pet.h"

using namespace std;

class Cat : public Pet {
private:
    string breed;
public:
    // Constructors
    Cat();
    Cat(const string& name, const string& breed, int age, int hungerLevel);
    // Accessors
    string getBreed() const;
    // Mutators
    void setBreed(const string& breed);
    // Override makeSound
    void makeSound() const override;
};
#endif