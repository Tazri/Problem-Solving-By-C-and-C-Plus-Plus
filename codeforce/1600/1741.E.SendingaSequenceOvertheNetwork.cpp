// link : https://codeforces.com/problemset/problem/1741/E
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
    vector<int> v(n);

    for(int i = 0;i < n;i++){
        cin >> v[i];
    }

    vector<vector<int>> vr(n+1);

    for(int i = 0;i < n;i++){
        if(i+v[i] < n){
            vr[i].push_back(v[i]+i);
        }

        if(i-v[i] >= 0){
            vr[i-v[i]].push_back(i);
        }
    }

    vector<bool> dp(n+1,false);
    dp[0] = true;

    for(int i = 0;i < n;i++){
        if(!dp[i])continue;

        for(int r:vr[i]){
            dp[r+1] = true;
        }
    }

    if(dp[n]){
        cout <<"YES" << endl;
    }else{
        cout << "NO"<<endl;
    }
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