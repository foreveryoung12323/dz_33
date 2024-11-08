#include "Animal.h"


Animal::Animal(const string& name, bool isPredator) : name(name), isPredator(isPredator) {
    if (name.empty()) {
        throw NameException();
    }
}

string Animal::getName() const {
    return name;
}

bool Animal::getIsPredator() const {
    return isPredator;
}
