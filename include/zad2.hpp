#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne
class Penne : public Makaron
{
  virtual double ileMaki(unsigned int P) const override
  {
    return static_cast<double>(P);
  }
};
// tutaj definicja metody gotujMakaron
Makaron* Makaron::gotujMakaron(const std::string& s)
{
  if (s.front()==s.back())
  {
    return new Tagliatelle(3.14, 0.42, 0.1);
  }
  else
  {
    reurn new Penne();
  }
}