#include<iostream>
using namespace std;

class Shape {
protected:
    double dimension;
public:
    virtual double calculateArea() = 0; // pure virtual
};

class Square : public Shape {
public:
    Square(double side) { dimension = side; }
    double calculateArea() { return dimension * dimension; }
};

class Circle : public Shape {
public:
    Circle(double radius) { dimension = radius; }
    double calculateArea() { return 3.1416 * dimension * dimension; }
};

int main() {
    double side, radius;
    cout << "Enter side of square: ";
    cin >> side;
    cout << "Enter radius of circle: ";
    cin >> radius;
    
    Square s(side);
    Circle c(radius);
    
    cout << "Area of Square: " << s.calculateArea() << endl;
    cout << "Area of Circle: " << c.calculateArea() << endl;
    return 0;
}