// link : https://codeforces.com/problemset/problem/1856/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool ok(vector<int> &v,int vi, int d,int k){
    int n = v.size();

    int take = 0;
    int x = d;
    for(int i=vi;i < n-1;i++){
        if(v[i] >= x)
            break;
        take += x-v[i];
        if(take > k)return false;
        x = x-1;
    }

    return true;
}

void _DIBBA(int _DIBBA_NO)
{
    int n,k;
    cin >>n >> k;

    vector<int> v(n);
    for(int i = 0;i < n;i++){
        cin >> v[i];
    }

    vector<int> mx(n);
    mx[n-1] = v[n-1];
    for(int i = n-2;i >= 0;i--){
        mx[i] = max(v[i],mx[i+1]+1);
    }

    int ans = -1;
    for(int i = 0;i < n-1;i++){
        int r = mx[i];
        int l = v[i];

        if(ans != -1 && ans > mx[i])
            continue;

        int ai = v[i];
        while(l <= r){
            int mid = l + (r-l)/2;

            if(ok(v,i,mid,k)){
                ai = mid;
                l = mid+1;
            }else{
                r = mid-1;
            }
        }

        if(ans == -1)ans = ai;
        ans = max(ans,ai);
    }

    cout << max(ans,v.back()) << endl;
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