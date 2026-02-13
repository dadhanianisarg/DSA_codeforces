#include <bits/stdc++.h>
using namespace std;
pair<int, vector<int>> solve(int n)
{
    vector<int> roundNos;
    int place = 1;

    while (n > 0)
    {
        int rem = n % 10;
        if (rem != 0)
        {
            roundNos.push_back(rem * place);
        }
        place *= 10;
        n /= 10;
    }

    return {roundNos.size(), roundNos};
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<int> input(t);
    for (int i = 0; i < t; i++)
        cin >> input[i];

    for (int i = 0; i < t; i++)
    {
        auto it = solve(input[i]);
        cout << it.first << endl;
        reverse(it.second.begin(), it.second.end());
        for (int num : it.second)
        {
            if (num != 0)
                cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}