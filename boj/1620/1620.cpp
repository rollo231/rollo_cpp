#include <bits/stdc++.h>

using namespace std;

int N, M;
string pokemon;
map<string, int> mp_si;
map<int, string> mp_is;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> pokemon;
        mp_si[pokemon] = i + 1;
        mp_is[i + 1] = pokemon;
    }

    for (int i = 0; i < M; i++) {
        cin >> pokemon;
        if (::strtol(pokemon.c_str(), nullptr, 10) == 0) {
            cout << mp_si[pokemon] << "\n";
        } else {
            cout << mp_is[(int) ::strtol(pokemon.c_str(), nullptr, 10)] << "\n";
        }
    }

    return 0;
}