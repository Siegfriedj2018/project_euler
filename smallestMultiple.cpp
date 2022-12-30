#include <iostream>
#include <cmath>
using std::cout;
using std::endl;

inline int GCD(int a, int b) {
  int abs_a = abs(a), abs_b = abs(b);
  if (abs_a == 0)
    return 1;

  while (abs_a != abs_b)
    if (abs_a > abs_b)
      abs_a -= abs_b;
    else
      abs_b -= abs_a;
  return abs_a;
}

int main() {
    size_t x = 20;
    size_t lcm = 1;
    for (size_t i = 2; i <= x; ++i) {
        lcm = (fabs(lcm) * (fabs(i) / GCD(lcm,i)));
    }

    cout << lcm << endl;
}