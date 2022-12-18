#include<iostream>
#include<list>
#include<string>
using namespace std;
class Car{
    string license;
    int age;
public:
    Car(int age,string license){
        this->age=age;
        this->license=license;
    }
    int getAge(){return this->age;}
    string getLicense(){return this->license;}
};
class Person{
    string name;
    int age;
public:
    Person(int age,string name){
        this->age=age;
        this->name=name;
    }
    int getAge(){return this->age;}
    string getNamePerson(){return this->name;}
};
template<class T>
class Average{
private:
    list<T> something;
public:
    void addsomething(T somethingSpecific){this->something.push_back(somethingSpecific);}
    double average(){
        double sum=0;
        int cnt=0;
        for(T it:something){
            sum+=it.getAge();
            cnt++;
        }
        return sum/cnt;
    }
};

