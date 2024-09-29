#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int numSteps(string s) {
        int ans = 0;  // Count of steps to reduce the number to 1
        int carry = 0; // To handle the addition when the number is odd
        
        // Start from the last character (least significant bit)
        for (int i = s.length() - 1; i > 0; i--) {
            int current_bit = s[i] - '0'; // Convert the character to an integer (0 or 1)

            // If the current bit plus carry is 1, it means the current number is odd
            if (current_bit + carry == 1) {
                ans += 2;  // 1 for the addition and 1 for the next division by 2
                carry = 1;  // Set carry to 1 for the next iteration
            } else {
                ans++; // Just divide by 2
            }
        }
        // If there's a carry left after the last bit, we need one more step to convert to 1
        return ans + carry; 
    }
};

int main() {
    Solution sol;
    cout << "Example 1: " << sol.numSteps("1101") << endl; // Output: 6
    cout << "Example 2: " << sol.numSteps("10") << endl;   // Output: 1
    cout << "Example 3: " << sol.numSteps("1") << endl;    // Output: 0
    return 0;
}
