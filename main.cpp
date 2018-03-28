#include <iostream>
#include <iomanip>
#include <string>
#include "order.h"
#include "item.h"
#include "StoreInventory.h"
#include "cashierView.h"
#include "registerController.h"
#include "keypadController.h"

#include "ObserverPattern-cpp/ObserverPattern.cpp"


const char DB_FILE[] = "fruit.db";

int main()
{
  StoreInventory inventory (DB_FILE);
  std::cout<<"======================\n"
           <<"NotPOSPOS  Version 0.1\n"
           <<"======================\n";
  order current;
  keypadController keypad(&current);
  registerController ticket(&inventory,&current);
  ticket.processOrder();
  current.addObserver(&keypad);
  current.addObserver(&ticket);

  return 0;
}
