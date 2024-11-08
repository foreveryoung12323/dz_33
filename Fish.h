#pragma once
#include "Animal.h"
#include <iostream>
using namespace std;
class Fish : public Animal {
private:
    bool isDeepWater;

public:
    Fish(const string& name, bool isPredator, bool isDeepWater);
    void showDescription() const override;
};
