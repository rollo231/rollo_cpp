#include <bits/stdc++.h>

using namespace std;

int a, cnt[26];
string b, ret;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a;

    for (int i = 0; i < a; ++i) {
        cin >> b;
        cnt[b[0] - 97]++;
    }

    for (int i = 0; i < 26; ++i) {
        if (cnt[i] >= 5) {
            ret += char(i + 97);
        }
    }

    if (!ret.empty()) {
        cout << ret << "\n";
    } else {
        cout << "PREDAJA" << "\n";
    }

    return 0;
}