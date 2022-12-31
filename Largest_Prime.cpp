#include <iostream>
#include <cmath>
using std::cout;
using std::endl;

long long PrimeFactors(long long n) {
    long long largestPrime = -1;

    while (n % 2 == 0) {
        largestPrime = 2;
        n >>= 1;
    }

    while (n % 3 == 0) {
        largestPrime = 3;
        n /= 3;
    }

    for (int i = 5; i <= sqrt(n); i += 6) {
        while(n % i == 0) {
            largestPrime = i;
            n /= i;
        }
        while (n % (i+2) == 0) {
            largestPrime = i + 2;
            n /= (i+2);
        }
    }

    if (n > 4) {
        largestPrime = n;
    }

    return largestPrime;
}

int main() {
    long long num = 600851475143;
    cout << PrimeFactors(num) << endl;

    return 0;
}