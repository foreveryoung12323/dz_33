#pragma once
#include <vector>
#include "Animal.h"
#include "ZooException.h"
using namespace std;

class Cage {
private:
    int number;
    int maxAnimals;
    vector<Animal*> animals;

public:
    Cage(int number, int maxAnimals);
    int getNumber() const;
    int getMaxAnimals() const;
    int getCurrentAnimals() const;
    void addAnimal(Animal* animal);
    void showAnimals() const;
};