#include <bits/stdc++.h>

using namespace std;

int n;
string pattern, pre, suf, s;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    cin >> pattern;

    int pos = (int) pattern.find('*');
    pre = pattern.substr(0, pos);
    suf = pattern.substr(pos + 1);

    for (int i = 0; i < n; i++) {
        cin >> s;
        if (pre.size() + suf.size() > s.size()) {
            cout << "NE\n";
        } else {
            if (pre == s.substr(0, pre.size()) && suf == s.substr(s.size() - suf.size())) {
                cout << "DA\n";
            } else {
                cout << "NE\n";
            }
        }
    }
    return 0;
}