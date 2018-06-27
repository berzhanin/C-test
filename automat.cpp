// listings/012/automat14/automat.cpp
#include <iostream>
#include <string>
#include "automat.h"

// Definition der Konstruktoren

Automat::Automat(unsigned long g, std::string s)
: standort{s} {
   if(g <= 1) {
     geld.push_back(0L);
   } 
   else {
     for(auto i=0UL; i<g; ++i) {
       geld.push_back(0L);
	 }
   }
}

// Definition der Methoden

unsigned long Automat::count() const {
  return geld.size();
}

unsigned long Automat::get_geld(unsigned long a) const {
  if( a > geld.size() ) {
  	std::cerr << "Fehlerhafte Abfrage\n";
  	return 0;
  }
  else {
  	return geld[a];
  }
}

void Automat::set_geld(unsigned long a, unsigned long g){
  if( a > geld.size() ) {
  	std::cerr << "Fehlerhafte Angabe\n";
  	return;
  }
  else {
  	geld[a] = g;
  }
}

const std::string& Automat::get_standort() const {
  return standort;
}

void Automat::set_standort(const std::string& s){
  standort = s;
}

void Automat::print() {
  std::cout << '\n' << "Geldautomat : ";
  std::cout << get_standort() << std::endl;
  std::cout << "Automaten   : ";
  std::cout << count() << std::endl;
  std::cout << "Inhalt\n";
  for(auto &elem: geld) {
    std::cout << "->\t" << elem << std::endl;
  }
}

