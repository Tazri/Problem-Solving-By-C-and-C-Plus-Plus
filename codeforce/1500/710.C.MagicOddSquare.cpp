// link : https://codeforces.com/problemset/problem/710/C
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

    vector<vector<bool>> odd(n+1,vector<bool>(n+1,false));

    int mi = (n/2)+1;

    int oddCnt = (n*n+1)/2;
    for(int i = 1;i<= n;i++){
        odd[mi][i] = 1;
        odd[i][mi] =1;
    }

    oddCnt -= (2*n-1);

    for(int i= 1;i <= n;i++){
        if(oddCnt <= 0)
            break;
        for(int j = 1;j<= n;j++){
            if(oddCnt <= 0)
                break;
            if(odd[i][j])
                continue;
            oddCnt-=4;
            odd[i][j] = true;
            odd[n-i+1][j] = true;
            odd[i][n-j+1] = true;
            odd[n-i+1][n-j+1] = true;
        }
    }

    vector<vector<int>> ans(n+1,vector<int>(n+1));
    int oi = 1;
    int ei = 2;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            if(odd[i][j]){
                ans[i][j] = oi;
                oi+=2;
            }else{
                ans[i][j] = ei;
                ei+=2;
            }
        }
    }

    for(int i = 1;i<= n;i++){
        for(int j= 1;j <= n;j++){
            cout << ans[i][j] << " \n"[j== n];
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