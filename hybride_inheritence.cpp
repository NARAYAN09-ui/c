#include<iostream>
using namespace std;
class vehicle {
public:
vehicle(){
    cout<<"this is a vehicle"<< endl;
}
};
class fare{
public:
fare(){
    cout<<"fare of vehicle"<< endl;
}
};
class car: public vehicle{
 public:
car(){
    cout<<"this is a car"<< endl;
}
};
class bus: public vehicle, public fare{
 public:
bus(){
  cout<<"this is a bus"<< endl;
}
};
int main(){
    bus obj;
    return 0;
}