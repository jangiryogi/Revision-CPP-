Question: Abstract class Shape banao. Circle aur Rectangle usse inherit karein, har ek apna area/perimeter nikaale, aur > operator overload karke areas compare karo
  
  #include <iostream>
#include <string>
using namespace std;

const double PI = 3.14159;

class Shape {                       // Abstraction
protected:
    string name;
public:
    Shape(string n) : name(n) {}
    virtual double area() const = 0;
    virtual double perimeter() const = 0;

    void display() const {
        cout << name << " -> Area: " << area()
             << ", Perimeter: " << perimeter() << endl;
    }

    bool operator>(const Shape& o) const {   // Operator overloading
        return area() > o.area();
    }
    virtual ~Shape() {}
};

class Circle : public Shape {       // Inheritance
    double r;
public:
    Circle(double radius) : Shape("Circle"), r(radius) {}
    double area() const override { return PI * r * r; }
    double perimeter() const override { return 2 * PI * r; }
};

class Rectangle : public Shape {
    double l, b;
public:
    Rectangle(double x, double y) : Shape("Rectangle"), l(x), b(y) {}
    double area() const override { return l * b; }
    double perimeter() const override { return 2 * (l + b); }
};

int main() {
    Shape* s[2] = { new Circle(7), new Rectangle(5, 10) };

    for (int i = 0; i < 2; i++)
        s[i]->display();            // Polymorphism

    if (*s[0] > *s[1]) cout << "Circle bada hai" << endl;
    else cout << "Rectangle bada hai" << endl;

    for (int i = 0; i < 2; i++) delete s[i];
    return 0;
}
