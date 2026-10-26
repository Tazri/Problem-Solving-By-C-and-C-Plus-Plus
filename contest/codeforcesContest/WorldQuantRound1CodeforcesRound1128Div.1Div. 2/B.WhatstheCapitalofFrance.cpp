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

int f(int a,int mx){
    for(int i = 0;i < 32;i++){
        int mask = 1LL << i;

        if(a & mask)continue;

        if((a|mask) <= mx )a|= mask;
    }

    return a;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);

    int mx;
    for(int i = 0;i < n;i++){
        cin >> v[i];

        if(i == 0)
            mx = v[i];
        mx = max(mx,v[i]);
    }

    int ans = 0;

    for(int i = 0;i < n;i++){
        ans |= (f(v[i],mx));
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