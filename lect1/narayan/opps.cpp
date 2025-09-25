#include <iostream>
using namespace std;
class animal {
    public: 
     void eat ()
    {
        cout<<"Animal is eating"<<endl;
    }
};
class bird {
    public: 
    void fly ()
    {
        cout<<"bird is fly"<<endl;
    }
};
class memmal: public animal{
    public: 
   void  navigation ()
    {
        cout<<"animal is navigating"<<endl;
    }
};
class bat : public bird , public memmal{
    public:
 void colour (){
        cout<<"bat colour is black"<<endl;
    }
};
int main() {
 bat b;
 b.eat();
 b.fly();
 b.navigation();
 b.colour();
 
    return 0;
}