// link : https://codeforces.com/contest/2267/problem/A
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
    char c;
    cin >>n >> c;

    string s;
    cin >> s;

    int l = 0;
    int r = n-1;
    int ans = 0;
    while(l <= r){
        if(s[l] != s[r]){
            if(s[l] == c ||  s[r] == c){
                ans++;
            }else{
                ans+=2;
            }
        }
        l++;
        r--;
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