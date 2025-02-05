#include <vector>
#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    
    vector<long long> sequence;
    while (n != 1) {
        sequence.push_back(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
    }
    
    // Add the final value of 1 to the sequence
    if (sequence.empty()) {
        cout << 1;
    } else {
        // Check if the sequence already ends with 1
        if (sequence.back() != 1) {
            sequence.push_back(1);
        }
    }
    
    // Print all elements in the sequence
    for (size_t i = 0; i < sequence.size(); ++i) {
        if (i > 0) {
            cout << " ";
        }
        cout << sequence[i];
    }
    
    return 0;
}
