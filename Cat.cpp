#include "Cat.h"
using namespace std;

// Define default constructor
Cat::Cat() : Pet(), breed("Unknown") {}

// Define parameterized constructor
Cat::Cat(const string& name, const string& breed, int age, int hungerLevel)
    : Pet(name, "Cat", age, hungerLevel), breed(breed) {}
// Accessor for breed
string Cat::getBreed() const {
    return breed;
}
// Mutator for breed
void Cat::setBreed(const string& breed) {
    this->breed = breed;
}
// Override makeSound
void Cat::makeSound() const {   
    cout << getName() << " meows: Meow!\n";
}