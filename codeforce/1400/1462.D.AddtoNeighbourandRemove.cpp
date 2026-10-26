// link : https://codeforces.com/problemset/problem/1462/D
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

int f(vector<int> &v,int k){
    int n = v.size();
    int sum = 0;
    int cnt =  0;
    for(int i = 0;i < n;i++){
        sum += v[i];

        if(sum > k){
            return -1;
        }

        if(sum == k){
            cnt++;
            sum = 0;
            continue;
        }
    }

    if(sum != 0)return -1;

    return cnt;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    vector<int> v(n);
    vector<int> pre(n);

    for(int i= 0;i < n;i++){
        cin >> v[i];
        pre[i] = v[i];


        if(i != 0){
            pre[i] += pre[i-1];
        }
    }

    int ans = n-1;

    for(int k:pre){
        int res = f(v,k);

        if(res != -1){
            int rm = n- res;
            ans = min(rm,ans);
        }
    }

    cout <<ans << endl;
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