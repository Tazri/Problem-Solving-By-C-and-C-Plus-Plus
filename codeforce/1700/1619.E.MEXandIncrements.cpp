// link : https://codeforces.com/problemset/problem/1619/E
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
    vector<int> v(n);

    vector<int> mp(n+1);
    vector<int> ans(n+1,-1);

    for(int i = 0;i < n;i++){
        cin >> v[i];

        mp[v[i]]++;
    }


    priority_queue<int> pq;
    vector<int>left(n+1);
    int base = 0;
    for(int i = 0;i <= n;i++){
        ans[i] = base+mp[i];

        if(mp[i] == 1)
            continue;

        if(mp[i] > 1){
            left[i] = mp[i] -1;
            pq.push(i);
            continue;
        }

        if(pq.size() <= 0)break;

        int ti = pq.top();
        pq.pop();

        base += (i-ti);
        left[ti]--;
        if(left[ti] >0)pq.push(ti);
    }

    for(int i = 0;i <= n;i++)
        cout << ans[i] << " \n"[i == n];
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