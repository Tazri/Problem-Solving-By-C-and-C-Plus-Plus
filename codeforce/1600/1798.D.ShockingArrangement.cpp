// link : https://codeforces.com/problemset/problem/1798/D
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
    vector<int> pos;
    vector<int> neg;
    int zero = 0;

    int sum = 0;
    int mn = 0;
    int mx = 0;
    multiset<int> mt;
    for(int i = 0;i < n;i++){
        int vi;
        cin >>vi;
        mt.insert(vi);
        if(i == 0){
            mn = vi;
            mx = vi;
        }

        mn = min(vi,mn);
        mx = max(vi,mx);
        if(vi > 0){
            sum += vi;
            pos.push_back(vi);
        }else if(vi < 0){
            neg.push_back(vi);
        }
    }
    int k = mx - mn;
    

    vector<int> ans(n+1);

    int pre = 0;
    int lm1 = pre;
    for(int i = 1;i <= n;i++){
        int tmp = k+lm1 -pre;

        auto it = mt.lower_bound(tmp);

        if(it == mt.begin()){
            cout << "NO" << endl;
            return;
        }
        it--;
        int pr = *it;
        ans[i] = pr;
        pre += pr;
        lm1 = min(lm1,pre);
        mt.erase(it);
    }

    cout <<"YES" << endl;
    for(int i = 1;i <= n;i++)cout << ans[i] << " \n"[i == n];
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