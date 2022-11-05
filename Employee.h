#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

using namespace std;



class Employee {

    public:
    int age;
    string name;
    double salary;
    int experience;

    Employee();
    Employee(int a, string n, double s, int e);
    ~Employee();


};


#endif // EMPLOYEE_H_INCLUDED
