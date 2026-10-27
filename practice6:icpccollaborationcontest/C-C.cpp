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
    int n;
    cin >> n;

    vector<pair<int,int>> v(n);

    for(int i = 0;i < n;i++){
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(),v.end(),[](pair<int,int> a,pair<int,int> b){
        int ad = a.first - a.second;
        int bd = b.first - b.second;

        return ad > bd;
    });

    int ans = 0;

    int left = 0;

    for(int i = 0;i < n;i++){
        int lagbe = v[i].first;
        int morbe = v[i].second;

        ans += morbe;
        left = (left+max(lagbe-left,0LL));
        left -= morbe;
    }

    cout << ans+left << endl;

}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++)
        _DIBBA(i);
    return 0;
}