#include<iostream>
using namespace std;
class student{
string name;
int roll,mark;
public :
student(string s, int r,int m){
    name = s;
    roll = r;
    mark = m;
}
void display(){
  cout<<"name is :"<<name<<endl;
  cout<<"roll is :"<<roll<<endl;
  cout<<"mark is :"<<mark<<endl;
}
};
int main(){
    student s("John", 1, 95);
    s.display();
    return 0;
}
