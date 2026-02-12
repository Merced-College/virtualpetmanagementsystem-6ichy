#include "Dog.h"
using namespace std;

// Define default constructor
Dog::Dog() : Pet(), breed("Unknown") {}

// Define parameterized constructor
Dog::Dog(const string& name, const string& breed, int age, int hungerLevel)
    : Pet(name, "Dog", age, hungerLevel), breed(breed) {}
// Accessor for breed
string Dog::getBreed() const {
    return breed;
}
// Mutator for breed
void Dog::setBreed(const string& breed) {
    this->breed = breed;
}
// Override makeSound
void Dog::makeSound() const {   
    cout << getName() << " barks: Woof!\n";
}


