#include <iostream>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define ff first
#define ss second

int main() {
  ll n, num, sum = 0;
  cin >> n;

  for (int i = 0; i < n - 1; ++i) {
    cin >> num;
    sum += num;
  }
  cout << (n * (n + 1) / 2) - sum << endl;

  return 0;
}
