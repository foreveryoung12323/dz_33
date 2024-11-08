#include "Mammal.h"
#include <iostream>
using namespace std;

Mammal::Mammal(const string& name, bool isPredator, const string& habitat)
    : Animal(name, isPredator), habitat(habitat) {}

void Mammal::showDescription() const {
    cout << "Mammal: " << name << ", Predator: " << (isPredator ? "Yes" : "No")
        << ", Habitat: " << habitat << endl;
}

