#include <iostream>
#include <cmath>
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using std::cout;
using std::cin;
using std::endl;

cpp_int fact(size_t num) {
    cpp_int fact = 1;
    for (int i = num; i > 0; --i) {
        fact *= i;
    }
    return fact;
}

int main() {
    size_t num = 0;
    cpp_int numFact = 0;

    cout << "Enter number for factorial sum: ";
    cin >> num;
    numFact = fact(num);

    cpp_int sum = 0;
    while (numFact > 0) {
        sum += (numFact % 10);
        numFact /= 10;
    }


    cout << "Final Sum: " << sum << endl;
}