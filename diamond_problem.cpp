#include <iostream>
using namespace std;

class Company {
public:
    void showDetails() {
   cout << "Company details\n";
    }
};

class Worker : virtual public Company {
public:
    int salary;
    Worker(int s) : salary(s) {}
    void showDetails() {
        cout << "Worker Salary: " << salary << endl;
    }
};

class Shareholder : virtual public Company {
public:
    int bonus;
    Shareholder(int b) : bonus(b) {}
    void showDetails() {
        cout << "Shareholder Bonus: " << bonus << endl;
    }
};

class Manager : public Worker, public Shareholder {
public:
    Manager(int s, int b) : Worker(s), Shareholder(b) {}
    void showDetails() {
        cout << "Manager Details\n";
        Company::showDetails();  
        Worker::showDetails();
        Shareholder::showDetails();
    }
};

int main() {
    Manager m(50000, 10000);
    m.showDetails();
    return 0;
}