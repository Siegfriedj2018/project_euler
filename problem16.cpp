// THis is problem 16 note to self to change later

#include <iostream>
#include <cmath>
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using std::cout;
using std::cin;
using std::endl;

cpp_int exp(unsigned long long a, unsigned long long b) {
    if (b==1) {
        cout << "A returned"<<endl;
        return a;
    }
    if (b % 2 == 1) {
        cout << "recursive..." << endl;
        return a * exp(a, b-1);
    }
    cout << "not recursive..." << endl;
    cpp_int temp_exp = exp(a, b/2);
    return temp_exp * temp_exp;
}

int main() {
    unsigned long long base = 0;
    unsigned long long expont = 0;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> expont;
    cpp_int num = 0;
    num = exp(base, expont);

    cpp_int sum = 0;
    while (num > 0) {
        sum += (num % 10);
        num /= 10;
    }

    cout << "Final Sum: " << sum << endl;
}