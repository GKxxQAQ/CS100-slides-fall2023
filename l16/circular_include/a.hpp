#ifndef A_HPP
#define A_HPP

#include "b.hpp"

struct A {
  int x;
  void foo(const B &b) {
    x = b.x;
  }
};

#endif // A_HPP