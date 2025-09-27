#include <iostream>
using namespace std;
class two;
class one
{
    int a;
    friend void exchange(one &, two &);
public:
    void getdata(int x)
    {
        a = x;
    }
    void display(void)
    {
        cout << a << endl;
    }
};
class two
{
    int b;
    friend void exchange(one &, two &);
public:
    void getdata(int x)
    {
        b = x;
    }
    void display(void)
    {
        cout << b << endl;
    }
};
void exchange(one &x, two &y)
{
    int temp = x.a;
    x.a = y.b;
    y.b = temp;
}
int main()
{
    one obj1;
    two obj2;
    obj1.getdata(5);
    obj2.getdata(10);
    cout << "Before exchange:" << endl;
    obj1.display();
    obj2.display();
    exchange(obj1, obj2);
    cout << "After exchange:" << endl;
    obj1.display();
    obj2.display();
    return 0;
}