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

    for(int i = 0;i < n;i++){
        int vi;
        cin >> vi;

        mp[vi]++;
    }

    int cnt = 0;
    for(pair<int,int> p:mp){
        int vi = p.first;
        int times = p.second;

        if(times >= vi){
            cnt += (times-vi);
        }else{
            cnt += times;
        }
    }

    cout << cnt << endl;
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