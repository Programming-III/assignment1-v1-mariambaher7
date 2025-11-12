#include <iostream>
#include <string>
#include"ANIMAL.h"
#ifndef ENCLOSURE_H
#define ENCLOSURE_H
using namespace std;
class enclosure{
  private:
  animal*animals;
  int capacity;
  int currentCount;
  public:
  enclosure();
  enclosure(int capacity,int currentCount);
  ~enclosure();
  void addAnimal(animal*a);
  void displayAnimal();
};
#endif
