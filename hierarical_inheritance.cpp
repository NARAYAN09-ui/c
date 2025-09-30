#include<iostream>
using namespace std;
class vehicle {
public:
vehicle(){
    cout<<"this is a vehicle"<< endl;
}
};
class car: public vehicle{
 public:
car(){
    cout<<"this is a car"<< endl;
}
};
class bus: public vehicle{
 public:
bus(){
  cout<<"this is a bus"<< endl;
}
};
int main(){
    bus obj;
    car obj1;
    return 0;
}