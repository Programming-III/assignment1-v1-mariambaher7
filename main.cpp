#include <iostream>
#include <string>
#include"ANIMAL.h"
#include "MAMMAL.h"
#include"BIRD.h"
#include "REPTILE.h"
#include "ENCLOSURE.h"
#include "VISITOR.h"
using namespace std;
animal::animal(){
  name="";
  age=0;
  isHungry=false;
}
animal::animal(string name, int age,bool isHungry){
  this->name=name;
  this->age=age;
  this->isHungry=isHungry;
}
animal::~animal(){}
void animal::setName(int n){
  name=n;
}
string animal::getName(){
  return name;
  }
  void animal::setAge(int a){
    age=a;
  }
  int animal::getAge(){
    return age;
  }
  bool animal:: getisHungry(){
    return isHungry;
  }
   void animal::setisHungry(bool H){
     isHungry=H;
   }
   void animal::display(){
     cout<<"Animal Name:"<<name<<endl;
     cout<<"Animal age:"<<age<<endl;
     cout<<"is the animal hungry:"<<isHungry<<endl;
   }
   void animal:: feed(){
     if(isHungry)
     cout<<"the animal needs to be fed"<<endl;
     else
     cout<<"the animal is full"<<endl;
   }
   mammal::mammal():animal(){
     furColor="";
   }
    mammal::mammal(string name, int age,bool isHungry,string furColor):animal(name,age,isHungry){
     this->isHungry=isHungry;
   }
   mammal::~mammal(){}
   bird::bird():animal(){
     wingSpan=0.0;
   }
   bird::bird(string name, int age,bool isHungry,float wingSpan):animal(name,age,isHungry){
     this->wingSpan=wingSpan;
   }
   bird::~bird(){}
   reptile::reptile():animal(){
    isVenomous=false;
   }
   reptile::reptile(string name, int age,bool isHungry,bool isVenomous):animal(name,age,isHungry){
     this->isVenomous=isVenomous;
   }
   reptile::~reptile(){}
   
   enclosure::enclosure(){
     capacity=0;
     currentCount=0;
    
     
   }
   enclosure::enclosure(int capacity,int currentCount){
     this->capacity=capacity;
     this->currentCount=currentCount;
     animal *animals=new animal[capacity];
   }
   enclosure::~enclosure(){
     delete[]animals;
   }
   void enclosure::addAnimal(animal* a){
     if(currentCount<capacity){
       animals[currentCount]=a;
       currentCount++;
     }else{
       cout<<"array is full"<<endl;
     }
   }
   void enclosure::  displayAnimal(){
     for(int i=0;i<currentCount;i++){
       cout<<"animal:"<<animals[i]<<endl;
     }
   }
   visitor::visitor(){
     visitorName="";
     ticketBought=0;
   }
   visitor::visitor(string visitorName, int ticketBought){
     this->visitorName=visitorName;
     this->ticketBought=ticketBought;
   }
   visitor:: ~visitor(){}
   
    void visitor::  display(){
     cout<<"visitor name:"<<visitorName<<endl;
     cout<<"visitorTicket"<<ticketBought<<endl;
   }
   int main(){
     enclosure e1;
     mammal m1;
     bird b1;
    
     reptile r1;
     visitor v1("ahmed",4);
     e1.displayAnimal();
     
   }
   
  
  
