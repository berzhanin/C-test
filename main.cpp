// listings/012/automat14/main.cpp
#include <iostream>
#include <memory>
#include "automat.h"

int main(void) {
  Automat device{5, "Frankfurt"};
  for(auto i = 0UL; i<device.count(); ++i){
    device.set_geld(i, 1000000);
  }
  Automat device02 = device;
  device02.set_geld(0, 300000);
  device.print();
  device02.print();
  
  Automat device03{"Dortmund"}; 
  device03.print();
  
  std::unique_ptr<Automat> devicePtr(
     new Automat{2, "Bonn"}  );
  devicePtr->set_geld(0, 200000);
  devicePtr->set_geld(1, 300000);
  devicePtr->print();
  system("PAUSE");
  return 0;
}
