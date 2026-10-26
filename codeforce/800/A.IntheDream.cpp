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
    int a,b,c,d;
    cin>>a >> b >> c >> d;

    int mn = min(a,b);
    int mx = max(a,b);

    if(mx > (mn*2+2)){
        cout<< "NO" << endl;
        return;
    }
    c -= a;
    d -= b;
    mn = min(c,d);
    mx = max(c,d);

    if(mx > (mn*2+2)){
        cout<< "NO" << endl;
        return;
    }

    cout <<"YES" << endl;
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