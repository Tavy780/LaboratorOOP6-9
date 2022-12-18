#include<iostream>
#include<cmath>
#include<typeinfo>
using namespace std;
class complexNumber{
private:
    double real;
    double imaginary;
public:
    complexNumber(double real,double imaginary){
        this->real=real;
        this->imaginary=imaginary;
    }
    complexNumber(){
        this->real=0;
        this->imaginary=0;
    }
    double getReal(){return this->real;}
    double getImaginary(){return this->imaginary;}
    complexNumber operator ^ (int n){
                  if(n==2)
                     return complexNumber(this->real*this->real-this->imaginary*this->imaginary,2*this->real*this->imaginary);
                  else
                     return complexNumber(pow(this->real*this->real+this->imaginary*this->imaginary,n)*cos(n*(atan(this->imaginary/this->real)*180/3.14159265358979)),
                                          pow(this->real*this->real+this->imaginary*this->imaginary,n)*sin(n*(atan(this->imaginary/this->real)*180/3.14159265358979)));
    }
    double operator ~ (){return this->real*this->real+this->imaginary*this->imaginary;}
    complexNumber operator + (complexNumber const &a){
                  complexNumber res(0,0);
                  res.real=this->real+a.real;
                  res.imaginary=this->imaginary+a.imaginary;
                  return res;
    }
    complexNumber operator < (complexNumber const &a){
         double g=a.real*a.real+a.imaginary*a.imaginary;
         return (real*real+imaginary*imaginary) > g ? complexNumber(real,imaginary) : a;
    }
};

/*double n;
int main(){
    complexNumber c1(10,30);
    complexNumber c2(4.2,4.5);
    complexNumber c3;
    complexNumber c4;
    complexNumber c5;
    complexNumber theGreater;
    c3 = c1+c2;
    n=~c1;
    theGreater=c1<c2;
    c2=c2^2;
    c4=c2^2;
    c5=c1^3;
    return 0;
}
14.2 34.5 ~c2
-2.61 37.8 c2=c2^2
-1422.03 37.8 c4=c2^2
4.82882e+08 8.75685e+08 c5=c1^3
10 30 theGreater = c1<c2
includes Exercise 6.2 and Exercise 5.3
*/
