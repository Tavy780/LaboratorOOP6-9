#include<iostream>
#include<list>
#include<string>
using namespace std;
class Car{
private:
    string license;
    int age;
public:
    Car(string license,int age){
        this->license=license;
        this->age=age;
    }
    string getLicense(){return this->license;}
    int getAgeCar(){return this->age;}
};
class Driver{
private:
    string name;
    string address;
    int age;
public:
    Driver(string name,string address,int age){
        this->name=name;
        this->address=address;
        this->age=age;
    }
    string getName(){return this->name;}
    string getAddress(){return this->address;}
    int getAgeDriver(){return this->age;}
};
struct MultipleCars{
    list<Car> cars;
    void addCars(Car theCar){this->cars.push_back(theCar);}
    void removeCar(Car theCar){
        list<Car>::iterator it;
        for(it=cars.begin();it!=cars.end();it++)
            if((*it).getLicense()==theCar.getLicense()&&(*it).getAgeCar()==theCar.getAgeCar()){
                this->cars.erase(it);
                break;
            }
    }
    void display(){
        for(Car car:this->cars)
            cout<<car.getLicense()<<" "<<car.getAgeCar()<<"\n";
    }
}theList;
int main(){
    theList.addCars(Car("843A313K",20));
    theList.addCars(Car("046B499L",20));
    theList.removeCar(Car("046B499L",20));
    theList.display();
}
/*
Members of a class are private by default,but the members of a structure are public by default.
Member classes/structures of a class are private by default.Member classes/structures of a structure are public by default.
Classes can be inherited but structers don't
*/
