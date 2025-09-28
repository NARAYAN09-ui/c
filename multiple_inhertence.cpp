#include<iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "Class A" << endl;
    }
};

class B {
public:
    void display() {
        cout << "Class B" << endl;
    }
};

class C : public A, public B {
public:
    void display() {
        A::display();
        B::display();
        cout << "Class C" << endl;
    }
};

int main() {
    C obj;
    obj.display();
    return 0;
}