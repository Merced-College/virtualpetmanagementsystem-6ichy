#include "Pet.h"
using namespace std;

// Destructor (added by Garret)
Pet::~Pet() {}

// Define default (added by Garret)
void Pet::makeSound() const {
    std::cout << name << " makes an undefined sound.\n";
}

// Default constructor
Pet::Pet() : name("Unnamed"), species("Unknown"), age(0), hungerLevel(5) {}

// Parameterized constructor
Pet::Pet(const string& name, const string& species, int age, int hungerLevel)
    : name(name), species(species), age(age), hungerLevel(hungerLevel) {}

// Accessors
string Pet::getName() const {
    return name;
}

string Pet::getSpecies() const {
    return species;
}

int Pet::getAge() const {
    return age;
}

int Pet::getHungerLevel() const {
    return hungerLevel;
}

// Mutators
void Pet::setName(const string& name) {
    this->name = name;
}

void Pet::setSpecies(const string& species) {
    this->species = species;
}

void Pet::setAge(int age) {
    if (age >= 0) {
        this->age = age;
    }
}

void Pet::setHungerLevel(int level) {
    if (level >= 0 && level <= 10) {
        hungerLevel = level;
    }
}

// CompareTo
int Pet::compareTo(const Pet& other) const {
    if (name < other.name) return -1;
    if (name > other.name) return 1;
    return 0;
}

// Output
void Pet::printInfo() const {
    cout << "Pet Name: " << name << endl;
    cout << "Species: " << species << endl;
    cout << "Age: " << age << endl;
    cout << "Hunger Level: " << hungerLevel << "/10" << endl;
}
