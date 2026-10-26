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

    string s;
    cin >> s;

    int mn = -1;
    int mx = -1;
    vector<int> v;
    int cnt = 0;
    for(int i = 0;i < n;i++){
        int vi = i+1;

        if(s[i] == '0'){
            v.push_back(vi);
            continue;
        }
        cnt++;

        if(mn == -1 || mx == -1){
            mn = vi;
            mx = vi;
        }

        mn = min(mn,vi);
        mx = max(mx,vi);
    }

    int ans = mx-mn;


    if(cnt >= 3){
        cout << ans << endl;
        return;
    }

    if(cnt == 1){
        cout << 0 << endl;
        return;
    }

    cout << 1 << endl;
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