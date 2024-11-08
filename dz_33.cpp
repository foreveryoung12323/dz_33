#include "Cage.h"
#include "Fish.h"
#include "Bird.h"
#include "Mammal.h"
#include <iostream>
using namespace std;

int main() {
    try {
        Cage cage(1, 2);
        try {
            Fish fish("Pike", true, true);
            cage.addAnimal(&fish);
        }
        catch (const NameException& e) {
            cerr << e.showMessage() << endl;
        }

        try {
            Bird bird("Falcon", true, 100);
            cage.addAnimal(&bird);
        }
        catch (const ZooException& e) {
            cerr << e.showMessage() << endl;
        }

        try {
            Mammal mammal("", false, "Forest");
            cage.addAnimal(&mammal);
        }
        catch (const NameException& e) {
            cerr << e.showMessage() << endl;
        }

        cout << "Animals in the cage:" << endl;
        cage.showAnimals();
    }
    catch (const ZooException& e) {
        cerr << e.showMessage() << endl;
    }
}
