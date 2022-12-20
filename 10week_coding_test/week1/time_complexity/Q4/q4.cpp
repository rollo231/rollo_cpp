#include <bits/stdc++.h>

using namespace std;

void solve(int N) {
    int a = 0, i = N;
    while (i > 0) {
        a += i;
        i /= 2;
    }
    cout << a << "\n";
}

int N;

int main() {
    cin >> N;
    solve(N);
    return 0;
}