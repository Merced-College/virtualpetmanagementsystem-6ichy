#include "Banshee.h"
using namespace std;

// Define default constructor
Banshee::Banshee() : Pet(), wingColor("Unknown") {}

// Define parameterized constructor
Banshee::Banshee(const string& name, const string& wingColor, int age, int hungerLevel)
    : Pet(name, "Banshee", age, hungerLevel), wingColor(wingColor) {}
    
// Accessor for WingColor
string Banshee::getWingColor() const {
    return wingColor;
}
// Mutator for WingColor
void Banshee::setWingColor(const string& wingColor) {
    this->wingColor = wingColor;
}
// Override makeSound
void Banshee::makeSound() const {   
    cout << getName() << " screeches: SCREECH!\n";
}