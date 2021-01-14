#include "zad1.hpp"
#include <cstdint>
#include <functional>

// tutaj funkcja polejSosem
template <typename T>
std::size_t polejSosem(const Tagliatelle& taglia, const T& sosik)
{
  return sosik.polej(taglia);
}