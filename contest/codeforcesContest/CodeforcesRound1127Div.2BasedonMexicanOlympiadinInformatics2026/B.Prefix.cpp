#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int long long int
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

map<pair<int,int>,int> dp;
vector<int> v;
int n;


void _DIBBA(int _DIBBA_NO)
{
    dp.clear();
    cin >> n;
    
    v = vector<int>(n);


    for(int i = 0;i < n;i++){
        cin >> v[i];
    }


    int mxPre = v[0];
    int mnPre = v[0];
    int mx = v[0];

    for(int i = 1;i< n;i++){
        int vi = v[i];
        vector<ll> canBe = {
            vi,
            vi+mxPre,
            vi-mxPre,
            vi+mnPre,
            vi-mnPre
        };

        for(int ci:canBe){
            mx= max(mx,ci);
        }

        mxPre = max({mnPre+vi, mxPre+vi, mxPre+vi+mxPre,mnPre+vi+mnPre});

        mnPre = min({mnPre+vi,mxPre+vi,mxPre})
    }

    cout << mx << endl;
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