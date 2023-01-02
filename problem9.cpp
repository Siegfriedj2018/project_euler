// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

// a2 + b2 = c2
// For example, 32 + 42 = 9 + 16 = 25 = 52.

// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.

#include <iostream>
#include <cmath>
using std::cout;
using std::endl;

int main() {
    size_t a = 0, b = 0, c = 0;
    for (size_t m = 0; m < 1000; ++m) {
        for (size_t n = 0; n < (1000-m); ++n) {
            a = pow(m, 2) - pow(n,2);
            b = 2 * m *n;
            c = pow(m, 2) + pow(n,2);

            if (a + b + c == 1000) {
                cout << a*b*c << endl;
            }
        }
    }


    return 0;
}