#include <iostream>
using namespace std;

class Planet {
public:
    string name;
    double distance, gravity;
};

int main() {
    Planet earth = {"Earth", 149.6, 1.0};
    Planet mars = {"Mars", 227.9, 0.38};

    cout << earth.name << " " << earth.gravity << endl;
    cout << mars.name << " " << mars.gravity;
    return 0;
}