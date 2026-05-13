//Unit3


#include <iostream>
#include <string>
using namespace std;
class Vehicle {
protected:
    string brand;
    int speed;
};
class Car : public Vehicle {
    int seats;
public:
    void setData() {
        brand = "Hyundai";
        speed = 120;
        seats = 5;
    }
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/h" << endl;
        cout << "Seating Capacity: " << seats << endl;
    }
};
int main() {
    Car c;
    c.setData();
    c.display();
    return 0;
}


// #include <iostream>
// using namespace std;
// class Vehicle {
// protected:
//     string brand;
// };
// class Car : public Vehicle {
// protected:
//     int seats;
// };
// class ElectricCar : public Car {
//     int range;
// public:
//     void setData() {
//         brand = "Tata";
//         seats = 5;
//         range = 350;
//     }
//     void display() {
//         cout << "Brand: " << brand << endl;
//         cout << "Seats: " << seats << endl;
//         cout << "Battery Range: " << range << " km" << endl;
//     }
// };
// int main() {
//     ElectricCar e;
//     e.setData();
//     e.display();
// }


// #include <iostream>
// using namespace std;
// class Engine {
// public:
//     void startEngine() {
//         cout << "Engine Started" << endl;
//     }
// };
// class GPS {
// public:
//     void startGPS() {
//         cout << "Navigation Started" << endl;
//     }
// };
// class SmartCar : public Engine, public GPS {
// public:
//     void ready() {
//         cout << "Smart Car Ready for Driving" << endl;
//     }
// };
// int main() {
//     SmartCar s;
//     s.startEngine();
//     s.startGPS();
//     s.ready();
// }


// #include <iostream>
// using namespace std;
// class Vehicle {
// public:
//     virtual void start() {
//         cout << "Vehicle Start" << endl;
//     }
// };
// class PetrolCar : public Vehicle {
// public:
//     void start() {
//         cout << "Petrol Car Starts with Ignition" << endl;
//     }
// };
// class ElectricCar : public Vehicle {
// public:
//     void start() {
//         cout << "Electric Car Starts with Battery Power" << endl;
//     }
// };
// int main() {
//     Vehicle* v;
//     PetrolCar p;
//     ElectricCar e;
//     v = &p;
//     v->start();
//     v = &e;
//     v->start();
// }


// #include <iostream>
// using namespace std;
// class ChargingSystem {
// public:
//     virtual void charge() = 0;
// };
// class FastCharge : public ChargingSystem {
// public:
//     void charge() {
//         cout << "Fast Charging Completed in 1 hour" << endl;
//     }
// };
// class NormalCharge : public ChargingSystem {
// public:
//     void charge() {
//         cout << "Normal Charging Completed in 5 hours" << endl;
//     }
// };
// int main() {
//     FastCharge f;
//     NormalCharge n;
//     f.charge();
//     n.charge();
// }