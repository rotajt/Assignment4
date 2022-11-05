#include<iostream>
#include<cstdlib>
#include<string>
#include<cstdio>

#include "hashLinkedList.h"
#include "Employee.h"
using namespace std;

int HashMap::collisonCount=0;

HashNode::HashNode(Employee p)
{
    this->p.age = p.age;
    this->p.name = p.name;
    this->p.experience = p.experience;
    this->p.salary = p.salary;
}

HashNode::HashNode()
{
    this->p.age = 0;
    this->p.name = "";
    this->p.experience = 0;
    this->p.salary = 0;
}

HashMap::HashMap()
{   SIZE = 100;
    collisonCount++;
    htable = new HashNode*[SIZE];
    for (int i = 0; i < SIZE; i++)
        htable[i] = NULL;
}


HashMap::~HashMap()
{
collisonCount--;
    SIZE = 100;
    for (int i = 0; i < SIZE; ++i)
{
        HashNode* entry = htable[i];
        while (entry != NULL)
    {
            HashNode* prev = entry;
            entry = entry->next;
            delete prev;
        }
    }
    delete[] htable;
}

int HashMap::hashing(int el){

 return el % SIZE; //Division method (Cormen)

 //return el(el+3)% SIZE //Knuth Variant on Division

}

void HashMap::Insert(Employee p)
{
    int hash_val = hashing(p.age);
    HashNode* prev = NULL;
    HashNode* entry = htable[hash_val];
    while (entry != NULL)
    {
        prev = entry;
        entry = entry->next;
    }
    if (entry == NULL)
    {
        entry = new HashNode(p);
        if (prev == NULL)
        {
            htable[hash_val] = entry;
        }
        else
        {
            prev->next = entry;
        }
    }
    else
    {
        entry->p.age = p.age;
    }

    head = *htable[0];
}


void HashMap::Remove(Employee p)
{
    int hash_val = hashing(p.age);
    HashNode* entry = htable[hash_val];
    HashNode* prev = NULL;
    if (entry == NULL || entry->p.age != p.age)
    {
        cout<<"No Element found at key "<<p.age<<endl;
        return;
    }
    while (entry->next != NULL)
{
        prev = entry;
        entry = entry->next;
    }
    if (prev != NULL)
    {
        prev->next = entry->next;
    }
    delete entry;
    cout<<"Element Deleted"<<endl;
}
 void HashMap::print(HashNode *n){


     while(n!=nullptr){
        cout<<"key: name, value: "<<n->p.name;
        cout<<"key: age, value: "<<n->p.age;
        cout<<"key: experience, value: "<<n->p.experience;
        cout<<"key: salary, value: "<<n->p.salary;
        n= n->next;
     }

 }
void HashMap::rate(int total,int collision)
{

    cout<<"The rate is "<<(collision/total)<<"% "<<endl;
}
