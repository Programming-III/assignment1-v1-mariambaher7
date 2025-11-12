#include <iostream>
#include <string>
#ifndef VISITOR_H
#define VISITOR_H
using namespace std;
class visitor{
  private:
  string visitorName;
  int ticketBought;
  public:
  visitor();
  visitor( string visitorName, int ticketBought);
  ~visitor();
  void display();
};
#endif
