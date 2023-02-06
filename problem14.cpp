#include <iostream>
#include <cstdlib>

// int byValue(int value) {
//     int newValue = value;
//     return newValue;
// }

//solved
int main() {
    size_t count = 1, n = 837799;
    std::cout << "Calculating..." << std::endl;
    // while (chain <= maxChain) {
    //     initial = byValue(n);
        while (n > 2) {
            if (n%2==0) {
                n /= 2;
            } else {
                n = (3*n) + 1;
            }
            ++count;
            std::cout << "count increased: " << count << std::endl;
            std::cout << "N: " << n << std::endl;
            // if (n == 1) {
            //     chain = count;
            // }
        }
        // if (chain == maxChain) {
        //    break;
        // }
        // count = 1;
        // ++chain;
        // }
        // std::cout << "Done with one chain" << std::endl;
        std::cout << "Total chain for " << n << ": " << count << std::endl;
        // n = initial - 1;
        // --maxTries;
        // std::cout << "Tries left: " << maxTries << std::endl;
    // }
    // std::cout << "Either ran out of tries or found a solution " 
    //             << n << ": " << count << std::endl;
}