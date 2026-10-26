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
    map<int,int> mp;

    int sum = 0;

    for(int i = 0;i <n;i++){
        int vi;
        cin >> vi;
        mp[vi]++;
        sum += vi;
    }

    int mx = 0;
    int vi = 0;
    for(auto p:mp){
        mx =max(p.second,mx);
        vi = p.first;
    }

    int rest = n-mx;
    int restSum = sum - (mx*vi);

    if(mx <= rest){
        cout << restSum + (n*mx) << endl;
        return;
    }

    int can = min(rest+2,mx);
    cout << restSum +(can*vi) << endl;
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