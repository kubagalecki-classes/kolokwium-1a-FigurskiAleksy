#include "catch.hpp"
#include <iostream>

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)
class Makaron
{
  public:
  virtual double ileMaki(unsigned int P) const=0;
  virtual ~Makaron()=default;
  static Makaron* gotujMakaron(const std::string& s);
};

// Zad1
// tutaj definicja klasy Tagliatelle
class Tagliatelle : public Makaron
{
  public:
    double get_L() { return L; }
    double get_W() { return W; }
    double get_R() { return R; }
    double get_C() { return C; }
    void set_L(const double& l) {L = l;}
    void set_W(const double& w) {W = w;}
    void set_R(const double& r) {R = r;}
    Tagliatelle(double l,double w,double r) : L(l), W(w), R(r) {}
    Tagliatelle(): L(0.5), W(0.5), R(0.5) {}
    virtual double ileMaki(unsigned P) const override
    {
      return P * L * W * (1. - R) * C;
    }

  private:
    double L;
    double W;
    double R;
    static const double C;
};