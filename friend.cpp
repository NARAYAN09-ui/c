#include<iostream>
using namespace std;
class two;
class one{
    int a;
    public:
    void input(int x){
        a=x;
    }
    friend void mul(one, two);
};
class two{
    int b;
    public:
    void input(int y){
        b=y;
    }
    friend void mul(one, two);
};
void mul(one o, two t){
    cout<<"multiply a and b: "<<o.a * t.b<<endl
    ;
}
int main(){
    one o;
    two t;
    o.input(9);
    t.input(12);
    mul(o, t);
    return 0;
}
