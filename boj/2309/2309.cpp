#include <bits/stdc++.h>

using namespace std;

int input[9]; // 인풋 배열 크기 9

int main() {
    for (int &i: input) {
        cin >> i;
    }

    sort(input, input + 9);

    do {
        int sum = 0;
        for (int i = 0; i < 7; ++i) { // 7개 선별
            sum += input[i];
        }
        if (sum == 100) {
            break;
        }
    } while (next_permutation(input, input + 9));

    for (int i = 0; i < 7; ++i) {
        cout << input[i] << "\n";
    }
    return 0;
}