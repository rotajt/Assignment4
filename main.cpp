#include<iostream>

#include "hashLinkedList.cpp"
#include "Employee.cpp"
#include "DynamicHashtable.cpp"

using namespace std;


int main()
{
    HashMap h1;
    DynamicHashtable d1;


    Employee e1(30,"Mina",10000,4);
    Employee e2(45,"Fawzy",5000,8);
    Employee e3(19,"Yara",2000,0);
    Employee e4(32,"Mariam",8000,2);
    Employee e5(33,"Ayman",4000,8);
    Employee e6(28,"Roshdy",9000,3);
    Employee e7(26,"Aya",6000,3);
    Employee e8(29,"Abdallah",7000,4);
    Employee e9(21,"Fatma",3000,1);


    h1.Insert(e1);
    h1.Insert(e2);
    h1.Insert(e3);
    h1.Insert(e4);
    h1.Insert(e5);
    h1.Insert(e6);
    h1.Insert(e7);
    h1.Insert(e8);
    h1.Insert(e9);

    d1.Insert(e1);
    d1.Insert(e2);
    d1.Insert(e3);
    d1.Insert(e4);
    d1.Insert(e5);
    d1.Insert(e6);
    d1.Insert(e7);
    d1.Insert(e8);
    d1.Insert(e9);

    d1.print();
    h1.print(&h1.head);


    return 0;
}
