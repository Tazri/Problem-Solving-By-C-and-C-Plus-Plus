#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n,k;
    cin >>n >> k;

    vector<int> v(n+1);
    vector<int> pre(n+1);

    for(int i = 1;i <= n;i++){
        cin >> v[i];
        pre[i] = v[i];
    }

    for(int i = 1;i <= n;i++){
        pre[i] += pre[i-1];
    }

    for(int i = 0;i <= n;i++){
        pre[i] %= k;
    }

    map<int,int> mp;
    mp[0] = 1;
    int ans = 0;

    for(int l = 1,r = k+1;r <= n;r++,l++){
        ans += mp[pre[r]];
        mp[pre[l]]++;
    }

    cout<< ans << endl;
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