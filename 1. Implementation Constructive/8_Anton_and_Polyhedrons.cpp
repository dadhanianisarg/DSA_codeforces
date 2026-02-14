#include <bits/stdc++.h>
using namespace std;
int solve(vector<string> &v)
{
    int sum = 0;
    for (auto x : v)
    {
        if (x == "Tetrahedron")
            sum += 4;
        else if (x == "Cube")
            sum += 6;
        else if (x == "Octahedron")
            sum += 8;
        else if (x == "Dodecahedron")
            sum += 12;
        else
            sum += 20;
    }
    return sum;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    vector<string> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    int sum = solve(v);
    cout << sum << "\n";
    return 0;
}