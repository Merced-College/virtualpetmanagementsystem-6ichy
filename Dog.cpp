#include "Dog.h"
using namespace std;

// Define default constructor
Dog::Dog() : Pet(), species("Unknown") {}

// Define parameterized constructor
Dog::Dog(const string& name, const string& species, int age, int hungerLevel)
    : Pet(name, "Dog", age, hungerLevel), species(species) {}
// Accessor for species
string Dog::getSpecies() const {
    return breed;
}
// Mutator for species
void Dog::setspecies(const string& species) {
    this->species = species;
}
// Override makeSound
void Dog::makeSound() const {   
    cout << getName() << " barks: Woof!\n";
}


