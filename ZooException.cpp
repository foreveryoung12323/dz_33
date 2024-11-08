#include "ZooException.h"

string PredatorException::showMessage() const {
    return "Cannot add a predator to a cage with non-predator animals.";
}

string MaxCapacityException::showMessage() const {
    return "Cannot add more animals — maximum capacity reached.";
}

string NameException::showMessage() const {
    return "Cannot create animal - name is not provided.";
}
