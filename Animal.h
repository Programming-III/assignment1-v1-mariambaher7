#include <iostream>
#include<string>
#ifndef ANIMAL_H
#define ANIMAL_H
using namespace std;
class animal{
  private:
  string name;
  int age;
  public:
  bool isHungry;
  public:
  animal();
  animal(string name, int age,bool isHungry);
  ~animal();
  void setName(int n);
  string getName();
  int getAge();
  void setAge(int a);
  bool getisHungry();
  void setisHungry(bool H);
  void display();
  void feed();
  
};
#endif

