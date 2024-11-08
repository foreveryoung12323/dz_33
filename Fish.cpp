#include "Fish.h"


Fish::Fish(const string& name, bool isPredator, bool isDeepWater)
    : Animal(name, isPredator), isDeepWater(isDeepWater) {}

void Fish::showDescription() const {
    cout << "Fish: " << name << ", Predator: " << (isPredator ? "Yes" : "No")
        << ", Deep Water: " << (isDeepWater ? "Yes" : "No") << endl;
}
