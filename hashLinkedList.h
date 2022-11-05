#ifndef HASHLINKEDLIST_H_INCLUDED
#define HASHLINKEDLIST_H_INCLUDED
#include "Employee.h"
using namespace std;
#include <iostream>
#include <string.h>

class HashNode
{
    public:
	Employee p;
	HashNode* next;
    HashNode();
    HashNode(Employee p);
};

class HashMap
{
    public:
        HashNode** htable;
        int SIZE;
        HashNode head;

        HashMap();
        ~HashMap();
        int hashing(int key);
        void Insert(Employee p);
        void Remove(Employee p);
        void print(HashNode *n);
        void rate(int total,int collision);
        static int collisonCount;
};


#endif // HASHLINKEDLIST_H_INCLUDED
