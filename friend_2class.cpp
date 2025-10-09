#include<iostream>
using namespace std;
class two; 
class one{
    friend class two;
    int a=23;
    public:
    void display(){
        cout<<"the value of a is: "<<a<<endl;
    }
};

class two{
   friend class one;
    int b=45;
    public:
    void display(){
        cout<<"the value of b is: "<<b<<endl;
    }
    void sum(one &n){
        cout<<"sum of a and b is :"<<n.a+b<<endl;
    }
    
};
int main (){
   one A ; 
   two B ;
   A.display();
   B.display();
   B.sum(A);
}