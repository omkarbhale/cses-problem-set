#include <bits/stdc++.h>

// https://cses.fi/problemset/task/1083

using namespace std;

int main() {
    long long int n;
    cin >> n;

    long long sum = 0;
    for (int i = 0; i < n - 1; i++) {
        int x;
        cin >> x;
        sum += x;
    }

    cout << n * (n+1) / 2 - sum;
}