#include <iostream>
#include <cmath>
#include <cstring>
using std::cout;
using std::endl;

int main() {
    const int maxValue = 2000000;
    bool prime[maxValue + 1];
    size_t SumPrimes = 0;
    memset(prime, true, maxValue + 1);

    for (int p = 2; p * p <= maxValue; ++p) {
        if (prime[p] == true) {
            for (int i = p*2; i <= maxValue; i += p) {
                prime[i] = false;
            }
        }
    }

    for (int i = 2; i <= maxValue; ++i) {
        if (prime[i]) {
            SumPrimes += i;
        }
    }
    
    cout << SumPrimes << endl;
}
