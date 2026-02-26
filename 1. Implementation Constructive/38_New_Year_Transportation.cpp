#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;

    vector<int> arr(n - 1);
    for (int i = 0; i < n - 1; i++)
        cin >> arr[i];

    int curr = 1;

    while (curr < t)
    {
        curr += arr[curr - 1];
    }

    if (curr == t)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}