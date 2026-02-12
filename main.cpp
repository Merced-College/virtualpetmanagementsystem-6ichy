#include <iostream>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"
#include "Banshee.h"

using namespace std;

int main() {
    Pet pet1("Rex", "Dog", 3, 6);
    Pet pet2("Whiskers", "Cat", 2, 4);
    Banshee pet3("Caoineag", "Black", 1, 5);

    cout << "Pet 1 Info:\n";
    pet1.printInfo();

    cout << "\nPet 2 Info:\n";
    pet2.printInfo();

    cout << "\nComparing pets by name: ";
    int result = pet1.compareTo(pet2);
    if (result < 0) cout << pet1.getName() << " comes before " << pet2.getName() << "\n";
    else if (result > 0) cout << pet1.getName() << " comes after " << pet2.getName() << "\n";
    else cout << "Both pets have the same name.\n";

    return 0;
}
