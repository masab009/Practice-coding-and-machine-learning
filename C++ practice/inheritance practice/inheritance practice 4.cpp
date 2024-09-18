#include<iostream>
using namespace std;

class Employee {
public:
    virtual void work() {  
        cout << "Employee is working on general tasks." << endl;
    }
};

class Developer : public Employee {
public:
    void work() {
        cout << "Developer is writing code and fixing bugs." << endl;
    }
};
int main() {
    Developer em1;
    em1.work();

}