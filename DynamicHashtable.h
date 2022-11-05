#ifndef DYNAMICHASHTABLE_H_INCLUDED
#define DYNAMICHASHTABLE_H_INCLUDED
#include "Employee.h"
using namespace std;

class DataItem {
    public:
   Employee p;
};


class DynamicHashtable
{
    public:
    int SIZE;
    DataItem* hashArray[];

    DynamicHashtable();
    ~DynamicHashtable();
    int hashing(int el);
    void Insert(Employee p);
    DataItem* Remove(Employee p);
    void print();
    void rate(int total,int collision);


     static int collisonCount;
};



#endif // DYNAMICHASHTABLE_H_INCLUDED
