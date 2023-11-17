#include <bits/stdc++.h>

// https://cses.fi/problemset/task/1068

using namespace std;

int main() {
    long n;
    cin >> n;

    cout << n;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        cout << " " << n;
    }

    return 0;
}