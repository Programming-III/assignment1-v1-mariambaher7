#include <iostream>
#include<string>
#include"ANIMAL.h"
#ifndef MAMMAL_H
#define MAMMAL_H
using namespace std;
class mammal:public animal{
  private:
  string furColor;
  public :
  mammal();
  mammal(string name, int age,bool isHungry,string furColor);
  ~mammal();
  
};
#endif
