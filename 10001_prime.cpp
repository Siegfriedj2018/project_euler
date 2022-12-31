#include <iostream>
#include <cmath>
using std::cout;
using std::endl;

int main() {
    // int primesFound = 1;
    for (double i = 104729; i <= 104780; i += 1) {
        for (double j = 0; j <= sqrt(i); ++j) {
            if (fmod(i, j) == 0) {
                cout << i << " : " << j << endl;
            }
        }
    }
    // 104743
    
    // cout << __cplusplus << endl;
}
