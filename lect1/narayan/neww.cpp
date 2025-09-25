#include <iostream>
using namespace std;
class myclass
{int a;
  float b;
  public:
  myclass(){a=1;
    b=2;
} 
 };
int add(int x, int y) {
    return x + y;
}

int main() {
    int a=5, b=10;
    cout<<"Sum:"<< add(a,b)<<endl;
    return 0;
}

