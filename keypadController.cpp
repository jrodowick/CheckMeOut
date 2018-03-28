#include "keypadController.h"

keypadController::keypadController(order * items)
{
  cart = items;
  display.refresh(*cart);
}

void keypadController::update()
{
  cout << "Things have changed!\n";
}
