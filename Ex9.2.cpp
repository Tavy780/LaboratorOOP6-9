#include <iostream>
#include<vector>
using namespace std;
class Vehicle {
public:
    virtual void start() = 0;
};
class Rocket : public Vehicle {
private:
    int id;
    string nameRocket;
public:
    Rocket(int id, string rocket) {
        this->id = id;
        nameRocket=rocket;
    }
    void start()
    {
        cout << "start "<<this->nameRocket << endl;
    }
};
class Car : public Vehicle {
private:
    string licenseNumber;
    string nameCar;
public:
    Car(string licenseNumber,string car) {
        this->licenseNumber = licenseNumber;
        nameCar=car;
    }
    void start()
    {
        cout << "start " << this->nameCar<< endl;
    }
    void stop() {
        cout << "stop speed(car) ln:" << this->licenseNumber << endl;
    }
};
int main() {
vector <Vehicle*>vehicule;
vehicule.push_back(new Car("aaa","Carlson"));
vehicule.push_back(new Car("bbb","Lighting McQueen"));
vehicule.push_back(new Rocket(23,"Rocketeer"));
for (auto element : vehicule) {
    element->start();
}
}
