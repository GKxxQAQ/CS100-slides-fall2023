#ifndef B_HPP
#define B_HPP

#include "a.hpp"

struct B {
  int x;
  void foo(const A &a) {
    x = a.x;
  }
};

#endif // B_HPP