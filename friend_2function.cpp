#include<iostream>
using namespace std;
class test
{
private:
   int a;
   int b;
public:
    
void sat_value(){
    a = 22;
    b = 33;
} friend float mean(test t);
};
float mean(test t){
    return (t.a + t.b)/2.0;
}   
int main(){
    test t1;
    t1.sat_value();
    cout<<"Mean value is: "<<mean(t1)<<endl;
    return 0;
}