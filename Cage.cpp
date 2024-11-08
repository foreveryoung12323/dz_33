#include "Cage.h"
#include <iostream>
using namespace std;

Cage::Cage(int number, int maxAnimals) : number(number), maxAnimals(maxAnimals) {}

int Cage::getNumber() const {
    return number;
}

int Cage::getMaxAnimals() const {
    return maxAnimals;
}

int Cage::getCurrentAnimals() const {
    return animals.size();
}

void Cage::addAnimal(Animal* animal) {
    if (getCurrentAnimals() >= maxAnimals) {
        throw MaxCapacityException();
    }

    for (const auto& existingAnimal : animals) {
        if (animal->getIsPredator() && !existingAnimal->getIsPredator()) {
            throw PredatorException();
        }
        if (!animal->getIsPredator() && existingAnimal->getIsPredator()) {
            throw PredatorException();
        }
    }

    animals.push_back(animal);
}

void Cage::showAnimals() const {
    for (const auto& animal : animals) {
        animal->showDescription();
    }
}
