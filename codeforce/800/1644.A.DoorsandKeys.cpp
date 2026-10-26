// link : https://codeforces.com/problemset/problem/1644/A
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
    string s;
    cin >> s;
    bool bk = false, rk = false,gk = false;

    for(int i = 0;i < s.size();i++){
        if(s[i] == 'b')bk= true;
        else if(s[i] == 'g') gk = true;
        else if(s[i] == 'r')rk = true;
        else if(s[i] == 'G' && (!gk)){
            cout << "NO" << endl;
            return;
        }else if(s[i] == 'R' && (!rk)){
            cout <<"NO" << endl;
            return;
        }else if(s[i] == 'B' && (!bk)){
            cout <<"NO" << endl;
            return;
        }
    }

    cout<<"YES" << endl;
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