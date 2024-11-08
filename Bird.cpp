#include "Bird.h"
#include <iostream>
using namespace std;

Bird::Bird(const string& name, bool isPredator, int flightSpeed)
    : Animal(name, isPredator), flightSpeed(flightSpeed) {}

void Bird::showDescription() const {
    cout << "Bird: " << name << ", Predator: " << (isPredator ? "Yes" : "No")
        << ", Flight Speed: " << flightSpeed << endl;
}
