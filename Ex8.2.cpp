#include<iostream>
#include<cmath>
#include<list>
using namespace std;
class FloatNumber{
      double number;
public:
      FloatNumber(double number){this->number=number;}
      double getModuleFloat(){return this->number<0?(-1)*(this->number):this->number;}
};
class ComplexNumber{
      double a;
      double b;
public:
      ComplexNumber(double a ,double b){this->a=a;this->b=b;}
      double module(){return sqrt(this->a*this->a+this->b*this->b);}
};
template<class T,class U>
class minimum{
private:
    list<T> someList;
    list<U> anotherList;
public:
    void addComplex(T theNumber){someList.push_back(theNumber);}
    void addFloat(U theNumber){anotherList.push_back(theNumber);}
    double theminimum(){
           double mini=LONG_MAX;
           for(T it: someList)
               if(it.module()<mini)
                    mini=it.module();
           for(U it : anotherList)
               if(it.getModuleFloat()<mini)
                    mini=it.getModuleFloat();
           return mini;
    }
};

