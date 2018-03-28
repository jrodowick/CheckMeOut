#ifndef _KEYPADCONTROLLER_H_
#define _KEYPADCONTROLLER_H_
#include "order.h"
#include "customerView.h"
#include <iostream>

#include "ObserverPattern-cpp/ObserverPattern.cpp"

using std::cout;

class keypadController: public IObserver
{
private:
  order *cart;
  customerView display;
public:
  keypadController(order *);
  void update();
};

#endif
