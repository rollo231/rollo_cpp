#include <bits/stdc++.h>

using namespace std;

string str;
int cnt[26];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    for (char i: str) {
        cnt[i - 97]++;
    }

    for (int i: cnt) {
        cout << i << " ";
    }

    return 0;
}