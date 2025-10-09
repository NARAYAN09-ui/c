#include<iostream>
using namespace std;
class bank_account{
int accountnumber,balance=0;
string name;
public :
bank_account(string r,int b){
    name =r;
    accountnumber =b;
}

void deposit(int d){
    balance = balance +d;
}void display(){
    cout<<"name is :"<<name<<endl;
    cout<<"accountnumber is :"<<accountnumber<<endl;
    cout<<"balance is :"<<balance<<endl;
}
 
void withdraw (int w){
    if(w>balance){
        cout<<"insufficient balance"<<endl;
        return;
    }
    balance = balance -w;
}

};
int main(){
    bank_account b1("aksh",230);
    b1.deposit(1500);
    b1.withdraw(200);
    b1.display();
    return 0;
}