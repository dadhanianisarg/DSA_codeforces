#include <bits/stdc++.h>
using namespace std;

string solve(string x) {
    for (int i = 0; i < x.size(); i++) {
        int num = x[i] - '0';
        int inv = 9 - num;

        // Do not allow leading zero
        if (i == 0 && inv == 0) continue;

        if (inv < num) {
            x[i] = char('0' + inv);
        }
    }
    return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string x;
    cin >> x;
    cout << solve(x) << '\n';

    return 0;
}
