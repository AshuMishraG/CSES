#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  std::vector<int> numbers(n - 1);
  for (int &num : numbers) {
    std::cin >> num;
  }

  int expected_sum = n * (n + 1) / 2;
  int actual_sum = 0;

  for (int num : numbers) {
    actual_sum += num;
  }

  int missing = expected_sum - actual_sum;

  std::cout << missing;
}
