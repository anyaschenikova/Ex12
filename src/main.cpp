// Copyright 2021 Schenikova
#include "TimedDoor.h"
#include <iostream>

int main() {
  TimedDoor tDoor(5);
  tDoor.lock();
  try {
    tDoor.unlock();
  }
  catch(std::string message) {
    std::cout << message; 
  }

  return 0;
}
