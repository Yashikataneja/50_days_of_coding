#include <iostream>
#include <climits> // for INT_MAX

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) 
            return false; // Negative numbers are not palindromes

        int num = x, rem, ans = 0;

        while(num) {
            rem = num % 10;  // Use 'num' instead of 'x'
            num /= 10;

            if(ans > INT_MAX / 10) 
                return false; // Handle overflow case

            ans = ans * 10 + rem;
        }

        return ans == x; // Compare 'ans' with 'x' instead of 'num'
    }
};

int main() {
    Solution solution;
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if(solution.isPalindrome(number)) {
        std::cout << number << " is a palindrome." << std::endl;
    } else {
        std::cout << number << " is not a palindrome." << std::endl;
    }

    return 0;
}
