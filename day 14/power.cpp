#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n < 1)
            return 0;
        while(n != 1) {
            if(n % 2 == 1)
                return 0;
            n = n / 2;
        }
        return 1;
    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if(sol.isPowerOfTwo(n)) {
        cout << n << " is a power of two.\n";
    } else {
        cout << n << " is not a power of two.\n";
    }

    return 0;
}
