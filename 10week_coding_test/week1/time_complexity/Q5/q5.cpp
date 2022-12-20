#include <bits/stdc++.h>

using namespace std;

int cnt;

void solve(int N) {
    cnt++;
    cout << cnt << "\n";
    if (N == 0) {
        return;
    }
    for (int i = 0; i < 3; ++i) {
        solve(N - 1);
    }
}

int N;

int main() {
    cin >> N;
    solve(N);
    return 0;
}
