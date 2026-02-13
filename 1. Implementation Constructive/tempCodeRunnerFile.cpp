#include <bits/stdc++.h>
using namespace std;

string solve(string x) {
    for(int i = 0; i < x.size(); i++) {
        int num = x[i] - '0';
        if( 9 - num < num ) {
            x[i] = '9' - num + '0';
        }
    }
    int temp = -1;
    for(int i = 0; i < x.size(); i++) {
        if(x[i] !='0') {
            temp = i;
            break;
        }
    }
    if(temp != -1) {
        return x.substr(temp);
    }
    return x;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string x;
    cin>>x;
    string ans = solve(x);
    cout<<ans<<"\n";
    return 0;
}