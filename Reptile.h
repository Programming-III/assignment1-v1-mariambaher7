#include <iostream>
#include <string>
#include"ANIMAL.h"
#ifndef REPTILE_H
#define REPTILE_H
using namespace std;
class reptile:public animal{
  private:
  bool isVenomous;
  public :
  reptile();
  reptile(string name, int age,bool isHungry,bool isVenomous);
  ~reptile();
  
  
};
#endif
