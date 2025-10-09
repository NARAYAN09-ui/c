#include<iostream>
using namespace std ;
class rectangle{
    int length,breadth;
    public : 
    rectangle(int l, int b){
        length = l;
        breadth = b;
    }
    void area(){
        cout<<"area is :"<<length*breadth<<endl;
    } 
    void perimetr(){
        cout<<"perimetr is :"<<2*(length+breadth)<<endl;
    }
    void issquare(){
        if(length==breadth){
            cout<<"it is square"<<endl;
        }
        else{
            cout<<"it is not square"<<endl;
        }
    }
};
int main(){
    rectangle r(4,5);
    r.area();
    r.perimetr();
    r.issquare();
    return 0;
}
