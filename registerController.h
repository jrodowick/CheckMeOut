#ifndef _REGISTERCONTROLLER_H_
#define _REGISTERCONTROLLER_H_
#include "cashierView.h"
#include "StoreInventory.h"
#include "order.h"

#include "ObserverPattern-cpp/ObserverPattern.cpp"

using std::cout;

class registerController: public IObserver
{
private:
  StoreInventory *database;
  order *cart;
  cashierView screen;
public:
  registerController(StoreInventory *, order *);
  void processOrder();
  void update();
};

#endif
