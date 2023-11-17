#include <bits/stdc++.h>

// https://cses.fi/problemset/task/1071

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long r, c;
    cin >> r >> c;

    // z is squared number closest to and greater than ans
    long long z = max(r, c);
    long long z2 = z * z;

    if (z % 2) {
      // z is odd
      cout << (z2 - z + c - r + 1) << "\n";
    } else {
      cout << (z2 - z + r - c + 1) << "\n";
    }
  }
  return 0;
}
