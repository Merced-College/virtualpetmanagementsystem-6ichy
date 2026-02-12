#ifndef Banshee_H
#define Banshee_H

#include <string>
#include "Pet.h"

using namespace std;

class Banshee : public Pet {
private:
    string wingColor;
public:
    // Constructors
    Banshee();
    Banshee(const string& name, const string& wingColor, int age, int hungerLevel);
    // Accessors
    string getWingColor() const;
    // Mutators
    void setWingColor(const string& wingColor);
    // Override makeSound
    void makeSound() const override;
};
#endif