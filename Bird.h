#include <iostream>
#include <string>
#include "ANIMAL.h"
#ifndef BIRD_H
#define BIRD_H
using namespace std;
class bird:public animal{
  private:
  float wingSpan;
  public:
  bird();
  bird(string name, int age,bool isHungry,float wingSpan);
  ~bird();
};
#endif
