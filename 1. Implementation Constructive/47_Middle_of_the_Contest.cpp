#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    string h1 = s1.substr(0, 2);
    string h2 = s2.substr(0, 2);
    string m1 = s1.substr(3, 2);
    string m2 = s2.substr(3, 2);

    if (h1 == h2)
    {
        int m11 = stoi(m1);
        int m22 = stoi(m2);
        int midM = (m11 + m22) / 2;
        cout << h1 << ":" << (midM < 10 ? "0" : "") << midM << endl;
    }
    else
    {
        int h11 = stoi(h1);
        int h22 = stoi(h2);
        int m11 = stoi(m1);
        int m22 = stoi(m2);
        int totMin1 = h11 * 60 + m11;
        int totMin2 = h22 * 60 + m22;
        int contestTime = totMin2 - totMin1;
        int midTime = totMin1 + contestTime / 2;
        int midH = midTime / 60;
        int midM = midTime % 60;
        cout << (midH < 10 ? "0" : "") << midH << ":" << (midM < 10 ? "0" : "") << midM << endl;
    }

    return 0;
}