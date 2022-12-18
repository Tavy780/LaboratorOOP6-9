#include <iostream>
#include <string>
using namespace std;
class Shape{
public:
virtual void draw() = 0; // we define the general behavior
};
class Circle : public Shape{
public:
    void draw() { cout << "circle\n"; } // we specify the behavior for this shape
};
class Triangle : public Shape{
public:
    void draw() { cout << "triangle\n"; } // we specify the behavior for this shape
};
class Drawing{
    Shape* s;
public:
    Drawing(Shape* s){
        this->s=s;
    }
    void drawShape()  {
        s->draw();
    }
};
int main()
{
Drawing* d = new Drawing(new Triangle());
d->drawShape();
d = new Drawing(new Circle());
d->drawShape();
Drawing e = Drawing(new Triangle());
e.drawShape();
e = Drawing(new Circle());
e.drawShape();
Triangle t1;
Circle c1;
Drawing f = Drawing(&t1);
f.drawShape();
f = Drawing(&c1);
f.drawShape();
}
