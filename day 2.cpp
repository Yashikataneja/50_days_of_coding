#include <bits/stdc++.h>  // For various standard libraries
#include <string>         // Correct header for string
#include <vector>         // Correct header for vector

class Solution {
 public:
  std::vector<std::string> fizzBuzz(int n) {
    std::vector<std::string> ans;

    for (int i = 1; i <= n; ++i) {
      std::string s;
      if (i % 3 == 0)
        s += "Fizz";
      if (i % 5 == 0)
        s += "Buzz";
      ans.push_back(s.empty() ? std::to_string(i) : s);
    }

    return ans;
  }
};

int main() {
  Solution solution;
  int n = 15;  // Test with 15
  std::vector<std::string> result = solution.fizzBuzz(n);

  // Print the result
  for (const std::string& str : result) {
    std::cout << str << std::endl;
  }

  return 0;
}
