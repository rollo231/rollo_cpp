#include <bits/stdc++.h>

using namespace std;

string a, temp;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a;
    temp = a;

    reverse(temp.begin(), temp.end());

    if (a == temp) {
        cout << 1 << "\n";
    } else {
        cout << 0 << "\n";
    }

    return 0;
}