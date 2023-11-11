#include <bits/stdc++.h>

// https://cses.fi/problemset/task/1069

using namespace std;

int main() {
    string sequence;
    cin >> sequence;

    char buffer = -1;
    long long ans = 0;
    long long currentans = 0;
    for (char c : sequence) {
        if (c == buffer) {
            currentans += 1;
        } else {
            ans = max(ans, currentans);
            currentans = 1;
            buffer = c;
        }
    }
    cout << max(ans, currentans);
}