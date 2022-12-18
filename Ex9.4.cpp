#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Shape{
public:
    virtual void draw(){cout<<"Drawing a shape\n";}
    virtual double area() = 0;
};
class Circle : public Shape{
    double radius;
public:
    Circle(double theRadius){radius = theRadius;}
    double area(){return radius*radius*3.14159;}
    void draw() { cout << "Circle\n"; }
};
class Rectangle : public Shape{
    double width;
    double height;
public:
    Rectangle(double theWidth , double theHeight){
            width=theWidth;
            height=theHeight;
    }
    double area(){return this->height*this->width;}
    void draw() { cout << "Rectangle\n"; }
};
class Square : public Shape{
    double lenght;
public:
    Square(double theLenght){lenght=theLenght;}
    double area(){return lenght*lenght;}
    void draw() { cout << "Square\n"; }
};
class Drawing{
public:
    vector<Shape*> shapes;
    void drawShape(Shape* pShape){
        this->shapes.push_back(pShape);
    }
    double tot_area(){
         double g;
         for(auto it_shape : shapes)
            g+=it_shape->area();
         return g;
    }
};
int main()
{
    Drawing* d = new Drawing();
    d->drawShape(new Rectangle(5,10));
    d->drawShape(new Circle(9.));
    Drawing e;
    e.drawShape(new Square(11));
    e.drawShape(new Circle(9.8));
    Drawing f;
    Rectangle r1 = Rectangle(10,40);
    Circle c1 =  Circle(8.938);
    f.drawShape(&r1);
    f.drawShape(&c1);
    return 0;
}

