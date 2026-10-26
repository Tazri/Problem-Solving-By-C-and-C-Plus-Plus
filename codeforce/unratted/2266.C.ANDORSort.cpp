// link : https://codeforces.com/contest/2266/problem/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    if(s[0] == '1'){
        int ans = 0;
        for(char ch:s){
            if(ch == '0')ans++;
        }
        cout << ans << endl;
        return;
    }

    int totalOne = 0;
    for(char ch:s){
        if(ch == '1')totalOne++;
    }

    int one = 0;
    int ans= n;
    for(int i = 0;i < n;i++){
        if(s[i] == '1')
        one++;

        int cal = one+(n-(i+1)-(totalOne-one));
        ans = min(ans,cal);
    }

    cout << ans << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for(int i = 1;i <= t;i++)
        _DIBBA(i);
    return 0;
}