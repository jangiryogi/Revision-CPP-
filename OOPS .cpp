#include <iostream>
using namespace std;

class Base {
public:
    Base() { cout << "Base constructor\n"; show(); }
    virtual void show() { cout << "Base show\n"; }
    ~Base() { cout << "Base destructor\n"; }
};

class Derived : public Base {
public:
    Derived() { cout << "Derived constructor\n"; }
    void show() override { cout << "Derived show\n"; }
    ~Derived() { cout << "Derived destructor\n"; }
};

int main() {
    Base* ptr = new Derived();
    ptr->show();
    delete ptr;
    return 0;
}
