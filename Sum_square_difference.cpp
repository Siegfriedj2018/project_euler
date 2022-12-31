#include <iostream>
#include <cmath>
using std::cout;
using std::endl;

int main() {
    int sum = 0, sum2 = 0, sumDif = 0;
    for (int i = 1; i <= 100; ++i) {
        sum += pow(i, 2);
    }

    for (int i = 1; i <= 100; ++i) {
        sum2 += i;
    }
    sum2 = pow(sum2, 2);

    sumDif = sum2 - sum;
    cout << sumDif << endl;

    return 0;
}