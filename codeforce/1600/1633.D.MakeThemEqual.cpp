// link : https://codeforces.com/problemset/problem/1633/D
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
 

int n,k;
vector<int> a,b,c;
vector<int> take(1001,INT32_MAX);

void cal(){
    int n = 1000;
    take[0] = 0;
    take[1] = 0;

    for(int i = 1;i <= n;i++){
        for(int x = 1;x <= i;x++){
            int val = i+(i/x);

            if(val <= n){
                take[val] = min(take[val],take[i]+1);
            }
        }

    }

    int mx = *max_element(take.begin(),take.end());
}


void _DIBBA(int _DIBBA_NO)
{
    cin >> n >> k;
    a = vector<int>(n+1,0);
    b = vector<int>(n+1,0);
    c = vector<int>(n+1,0);
    
    for(int i = 0;i < n;i++)
        cin >> b[i];

    for(int i = 0;i < n;i++)
        cin >> c[i];

    for(int i = 0;i< n;i++){
        b[i] = take[b[i]];
    }


    k = min(12*n,k);
    vector<vector<int>> dp(n+1,vector<int>(k+1,0));


    for(int i = n;i >= 0;i--){
        for(int ki = k;ki >= 0;ki--){
            if(i >= n){
                dp[i][ki] = 0;
                continue;
            }

            dp[i][ki] = dp[i+1][ki];

            if(ki + b[i] <= k){
                dp[i][ki] = max(dp[i][ki],c[i]+dp[i+1][ki+b[i]]);
            }

            
        }
    }

    cout << dp[0][0] << endl;
    
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    cal();
    int t = 1;
    cin >> t;
    for(int i = 1;i <= t;i++)
        _DIBBA(i);
    return 0;
}