#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            int oddInd = -1;
            int evenInd = -1;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    evenInd = i;
                }
                else
                {
                    oddInd = i;
                }
                if (oddInd != -1 && evenInd != -1)
                {
                    break;
                }
            }
            if (oddInd != -1 && evenInd != -1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}