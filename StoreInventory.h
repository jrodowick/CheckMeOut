#ifndef _STORE_INVENTORY_H_
#define _STORE_INVENTORY_H_
#include <vector>
#include "item.h"

#include "ObserverPattern-cpp/ObserverPattern.cpp"

class StoreInventory: public Observable
{
  private:
    std::vector<item> inventory;
  public:
    ~StoreInventory();
    StoreInventory(const char []);
    item lookup(int);
};

#endif
