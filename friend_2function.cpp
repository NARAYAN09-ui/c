#include<iostream>
using namespace std ;
class pushpa;
class sahil{
    int a;
    public :
 void getdata(int x){
     a=x;
 }
 friend void add(pushpa&, sahil&);
};
class pushpa{
int a;
public :
void getdata(int y){
    a=y;
}
friend void add(pushpa&,sahil&);
};
void add(pushpa &p, sahil &s){
    cout<<"sum of pushpa and sahil's age: "<<s.a+p.a<<endl;
}
int main (){
    pushpa p;
    sahil s;
    p.getdata(19);
    s.getdata(20);
    add(p,s);
}