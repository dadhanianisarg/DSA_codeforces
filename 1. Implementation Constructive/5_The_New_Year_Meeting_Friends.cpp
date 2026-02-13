#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int maxi = max({x1, x2, x3});
    int mini = min({x1, x2, x3});
    int meetPoint = -1;
    if (x1 != maxi && x1 != mini)
        meetPoint = x1;
    else if (x2 != maxi && x2 != mini)
        meetPoint = x2;
    else
        meetPoint = x3;

    cout << (maxi - meetPoint) + (meetPoint - mini) << "\n";
    return 0;
}