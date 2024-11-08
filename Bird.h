#pragma once
#include "Animal.h"

class Bird : public Animal {
private:
    int flightSpeed;

public:
    Bird(const string& name, bool isPredator, int flightSpeed);
    void showDescription() const override;
};
