#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end());
    int cnt = 0;
    int ans = 0;
    vector<int> learntInd;
    for (int i = 0; i < n; i++)
    {
        if (ans + a[i].first <= k)
        {
            ans += a[i].first;
            cnt++;
            learntInd.push_back(a[i].second);
        }
        else
        {
            break;
        }
    }

    cout << cnt << endl;
    for (int i : learntInd)
        cout << i + 1 << " ";
    return 0;
}