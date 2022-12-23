#include <bits/stdc++.h>

using namespace std;

string a;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    getline(cin, a);

    for (char &i: a) {
        if (i >= 65 && i < 97) {
            if (i + 13 > 90) {
                i = char(i + 13 - 26);
            } else {
                i = char(i + 13);
            }
        } else if (i >= 97 && i <= 122) {
            if (i + 13 > 122) {
                i = char(i + 13 - 26);
            } else {
                i = char(i + 13);
            }
        }
        cout << i;
    }

    return 0;
}