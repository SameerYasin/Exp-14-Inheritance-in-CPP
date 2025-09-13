// Name    : Sameer Yasin
// PRN     : 24070123092
// Division: B1
// Exp-14
// Program : Access Specifiers in Inheritance (Vehicle Example)

#include <iostream>
using namespace std;

// Base class 
class Vehicle {
private:
    int cost = 10000;

public:
    string brand = "Ford";
    void color() {
        cout << "wao red " << endl;
    }
    void showCost() {
        cout << "Cost: " << cost << endl;
    }

protected:
    void displayInfo() {
        cout << "Brand: " << brand << endl;
    }
};

// Derived class (public inheritance)
class car : public Vehicle {
public:
    string model = "Mustang";
    void speed() {
        cout << "Max speed is 200km/h" << endl;
        displayInfo(); 
    }
};

// Derived class (protected inheritance)
class twowheeler : protected Vehicle {
public:
    string type = "Jawa";
    void showCost() {
        // cout << "Cost: " << cost << endl; // Cannot access private member
    }
    void speed() {
        cout << "Max speed is 100km/h" << endl;
        displayInfo(); 
    }
};

int main() {
    Vehicle myVehicle;
    myVehicle.color();

    car myCar;
    myCar.color();
    myCar.speed();    

    return 0;
}

/*==========OUTPUTS==========
wao red 
wao red 
Max speed is 200km/h
Brand: Ford
*/
