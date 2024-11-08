#include <string>
using namespace std;

class ZooException {
public:
    virtual string showMessage() const = 0;
};

class PredatorException : public ZooException {
public:
    string showMessage() const override;
};

class MaxCapacityException : public ZooException {
public:
    string showMessage() const override;
};

class NameException : public ZooException {
public:
    string showMessage() const override;
};
