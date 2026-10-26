// link : https://codeforces.com/contest/1208/problem/C
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

    vector<vector<int>> ans(n,vector<int>(n,0));

    int d = 0;
    int h = n/2;
    for(int i = 0;i < n/2;i++){
        for(int j= 0;j < n/2;j++){
            int vi = d++;
            ans[i][j] = (vi<<2);
            ans[h+i][j] = (vi << 2) | 1;
            ans[i][h+j] = (vi << 2) | 2;
            ans[h+i][h+j] = (vi << 2) | 3;
        }
    }

    for(int i =0;i < n;i++){
        for(int j = 0;j < n;j++){
            cout << ans[i][j] << " \n"[j == n-1];
        }
    }
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