#include<iostream>
using namespace std;
class two;
class one{
    int a;
    public:
    void input(int value){
        a=value;
    }
    friend void add(one, two);
};
class two{
    int b;
    public:
    void input(int value){
        b=value;
    }
    friend void add(one, two);
};
void add(one o, two t){
    cout<<"the sum of a and b is: "<<o.a + t.b<<endl
    ;
}
int main(){
    one o;
    two t;
    o.input(21);
    t.input(31);
    add(o, t);
    return 0;
}
