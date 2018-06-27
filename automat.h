// listings/012/automat14/automat.h
#ifndef _AUTOMAT_H_
#define _AUTOMAT_H_
#include <string>
#include <vector>

class Automat {
  private:
    // Daten der Klasse "Automat"
    std::vector<unsigned long> geld;
    std::string standort{""};
  public:
    // Deklaration der Konstruktoren
    Automat():Automat(1,""){};
    Automat(unsigned long g):Automat(g,""){};
    Automat(std::string s):Automat(1,s){};
    Automat(unsigned long, std::string);
    // Methoden der Klasse "Automat"
    unsigned long count() const;
    unsigned long get_geld(unsigned long a) const;
    void set_geld(unsigned long a,  unsigned long g);
    const std::string& get_standort() const;
    void set_standort(const std::string& s);
    void print();
};
#endif
