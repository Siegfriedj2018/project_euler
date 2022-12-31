#include <iostream>
using std::cout;
using std::endl;

int reverse(int num) {
    int rev_num = 0;
    while (num > 0) {
        rev_num *= 10;
        rev_num += num % 10;
        num /= 10;
    }
    return rev_num;
}

int main() {
    int num = 0;
    bool is_found = false;
    while (!is_found) {
        for (int i = 999; i >= 900; --i) {
            for (int j = 999; j >= 900; --j) {
                num = i * j;
                if (num == reverse(num)) {
                    cout << num << endl;
                    is_found = true;
                }
            }
        }
    }
}