#ifndef PET_H
#define PET_H

#include <string>
#include <iostream>

using namespace std;

class Pet {
private:
    string name;
    string species;
    int age;
    int hungerLevel; // 0 (full) to 10 (starving)

public:
    // Constructors
    Pet();
    Pet(const string& name, const string& species, int age, int hungerLevel);

    // Deconstructors added by Garret
    virtual ~Pet(); // added by Garret

    // Accessors (Getters)
    string getName() const;
    string getSpecies() const;
    int getAge() const;
    int getHungerLevel() const;

    // Mutators (Setters)
    void setName(const string& name);
    void setSpecies(const string& species);
    void setAge(int age);
    void setHungerLevel(int level);

    // CompareTo
    int compareTo(const Pet& other) const; // Returns -1, 0, or 1 based on name comparison

    // Output Function
    void printInfo() const;
    virtual void makeSound() const; // added by Garret
};

#endif
