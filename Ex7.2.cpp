#include<iostream>
#include<string>
#include<list>
using namespace std;
class Group{
public:
    class Student{
        string name;
        int age;
        public:
            Student(int age,string name){this->age=age; this->name=name;}
            string getName(){return this->name;}
            int getAge(){return this->age;}

    };
    list<Student*>theGroup;
    void addStudent(Student *thisStudent){this->theGroup.push_back(thisStudent);}
    list<Student*> getList(){return this->theGroup;}
    void display(){
        for(Student *stud : theGroup)
            cout<<stud->getAge()<<" "<<stud->getName()<<"\n";
    }
};

