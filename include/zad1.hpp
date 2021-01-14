#include "catch.hpp"

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)

// Zad1
// tutaj definicja klasy Tagliatelle
class Tagliatelle
{
  public:
    double get_L() { return L; }
    double get_W() { return W; }
    double get_R() { return R; }
    double get_C() { return C; }
    void set_L(double l) {L = l;}
    void set_W(double w) {W = w;}
    void set_R(double r) {R = r;}
    Tagliatelle(double l, double w , double r) : L(l), W(w), R(r){}
    Tagliatelle() : L(0.5), W(0.5), R(0.5) {}
    double ileMaki(unsigned P) const
    {
      return P * L * W * (1. - R) * C;
    }

  private:
    double L;
    double W;
    double R;
    const double C;
}