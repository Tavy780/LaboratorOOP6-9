#include<iostream>
#include<cmath>
#include<list>
using namespace std;
class ComplexNumber{
      double a;
      double b;
public:
      ComplexNumber(double a ,double b){this->a=a;this->b=b;}
      double module(){return sqrt(this->a*this->a+this->b*this->b);}
};
template<class T>
class minimum{
private:
    list<T> someList;
public:
    void addNumber(T theNumber){someList.push_back(theNumber);}
    double theminimum(){
           double mini=LONG_MAX;
           for(T it: someList)
               if(it.module()<mini)
                    mini=it.module();
           return mini;
    }
};

