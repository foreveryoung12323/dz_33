#pragma once
#include <string>
#include <iostream>
using namespace std;
#include "ZooException.h"

class Animal {
protected:
    string name;
    bool isPredator;

public:
    Animal(const string& name, bool isPredator);
    string getName() const;
    bool getIsPredator() const;
    virtual void showDescription() const = 0;
};

