#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

unsigned long long exp(unsigned long long a,unsigned long long b) {
    if (b==1) {
        cout << "A returned"<<endl;
        return a;
    }
    if (b % 2 == 1) {
        cout << "recursive..." << endl;
        return a * exp(a, b-1);
    }
    cout << "not recursive..." << endl;
    unsigned long long temp_exp = exp(a, b/2);
    return temp_exp * temp_exp;
}

int main() {
    unsigned long long base = 0;
    unsigned long long expont = 0;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> expont;
    unsigned long long sum = 0;
    sum = exp(base, expont);

    // cout << "Starting num: " << num << endl;
    cout << "Final Sum: " << sum << endl;
}