#include "Employee.h"
using namespace std;

Employee::Employee(){
    age=0;
    name="";
    salary=0;
    experience=0;
}
Employee::Employee(int a, string n, double s, int e){
    age=a;
    name=n;
    salary=s;
    experience=e;
}

Employee::~Employee(){



}
