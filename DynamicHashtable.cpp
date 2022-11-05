#include "DynamicHashtable.h"

#include <iostream>

using namespace std;

  int DynamicHashtable::collisonCount=0;

DynamicHashtable::DynamicHashtable(){
collisonCount++;
    this->SIZE = 10;
     *hashArray = new DataItem[this->SIZE];
    for (int i = 0; i < SIZE; i++)
        hashArray[i] = NULL;
}
DynamicHashtable::~DynamicHashtable(){
collisonCount--;

}
int DynamicHashtable::hashing(int el){
 return el % SIZE; //Division method (Cormen)
 //return el(el+3)% SIZE //Knuth Variant on Division

}

void DynamicHashtable::Insert(Employee p){

    DataItem * temp = new DataItem;
    temp->p = p;
   int hashIndex = hashing(temp->p.age);

   while(hashArray[hashIndex] != NULL && hashArray[hashIndex]->p.age != -1) {

      ++hashIndex;

      hashIndex %= SIZE;
   }

   hashArray[hashIndex]->p = p;

}
struct DataItem* DynamicHashtable::Remove( Employee p){

    DataItem *dummyItem = nullptr;
     int key = p.age;


   int hashIndex = hashing(key);

   while(hashArray[hashIndex] !=NULL) {

      if(hashArray[hashIndex]->p.age == p.age) {
         struct DataItem* temp = hashArray[hashIndex];

         hashArray[hashIndex] = dummyItem;
         return temp;
      }


      ++hashIndex;


      hashIndex %= SIZE;
   }

   return NULL;
}


void  DynamicHashtable::print(){

 DataItem *temp= nullptr;

    for (int x = 0; x < SIZE; x++)
    {
        temp->p = hashArray[x]->p;

        if (temp != NULL)
        {
             cout<<"key: name, value: "<<temp->p.name;
            cout<<"key: age, value: "<<temp->p.age;
            cout<<"key: experience, value: "<<temp->p.experience;
            cout<<"key: salary, value: "<<temp->p.salary;

        }
    }
}

void DynamicHashtable::rate(int total,int collision)
{

    cout<<"The rate is "<<(collision/total)<<"% "<<endl;
}
