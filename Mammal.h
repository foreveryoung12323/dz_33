#pragma once
#include "Animal.h"

class Mammal : public Animal {
private:
    string habitat;

public:
    Mammal(const string& name, bool isPredator, const string& habitat);
    void showDescription() const override;
};
