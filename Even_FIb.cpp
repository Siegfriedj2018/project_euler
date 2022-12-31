#include <iostream>
// #include <iomanip>
// #include <cmath>
using std::cout;
// using std::cin;
using std::endl;
// using std::setprecision;

// inline double phi() {
//     return (1 + sqrt(5)) / 2;
// }

// inline double psi() {
//     return (1 - sqrt(5)) / 2;
// }

// double fib(int n) {
//     return ((pow(phi(), n) - (pow(1-phi(), n))) / sqrt(5));
// }

// double rev_fib(int fn) {
//     return floor(log((fn * sqrt(5) + sqrt(5 * (pow(fn, 2)) - 4)) / 2) / log(phi()));
// }

// double get_k(int n) {
//     return rev_fib(n);
// }

// int sum_even(double k) {
//     double phi3 = pow(phi(), 3);
//     double psi3 = pow(psi(), 3);

//     return (int) ((1 / sqrt(5)) * (phi3 * ((1 - pow(phi3, k)) / (1 - phi3)) - 
//         psi3 * ((1 - pow(psi3, k)) / (1 - psi3))));
// }


int main() {
    size_t last = 4000000;
    size_t sum = 0;
    size_t a = 1, b = 2;

    while (b <= last) {
        if (b % 2 == 0) {
            sum += b;
        }

        auto next = a + b;
        a = b;
        b = next;
    }

    cout << sum << endl;

}