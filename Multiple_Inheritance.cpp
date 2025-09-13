// Name    : Sameer Yasin
// PRN     : 24070123092
// Division: B1
// Exp-14
// Program : Multiple Inheritance (SmartCar Example)

#include <iostream>
using namespace std;

class Vehicle {
public:
    void showType() const {
        cout << "This is a vehicle." << endl; 
    }
};

class Device {
public:
    void showName() const {
        cout << "This is a device." << endl;
    }
};

class SmartCar : public Vehicle, public Device {
public:
    void showDetails() const {
        showType();
        showName();
        cout << "This is a smart car." << endl;
    }
};

int main() {
    SmartCar myCar;
    myCar.showDetails();
    return 0;
}

/*==========OUTPUTS==========
This is a vehicle.
This is a device.
This is a smart car.
*/
