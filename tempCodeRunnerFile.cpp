#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "HARD\n";
    else
        cout << "EASY\n";

    return 0;
}