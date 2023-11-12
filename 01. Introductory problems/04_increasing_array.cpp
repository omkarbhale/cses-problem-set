#include <bits/stdc++.h>

// https://cses.fi/problemset/task/1094

using namespace std;

int main() {
    int n;
    cin >> n;
    
    long cmax = 0;
    long ans = 0;
    for (int i = 0; i < n; i++) {
        long x;
        cin >> x;
        cmax = max(x, cmax);

        ans += cmax - x;
    }

    cout << ans;
}