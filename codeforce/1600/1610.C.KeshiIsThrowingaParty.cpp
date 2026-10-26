// link : https://codeforces.com/problemset/problem/1610/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool ok(vector<pair<int,int>> &v,int k){
    int n = v.size();

    int cnt = 0;

    int i = 0;
    for(int fi = k-1,si = 0;fi >= 0 && i < n;fi--,si++){
        
        while(i < n){
            if(v[i].first >= fi && v[i].second >= si){
                cnt++;
                i++;
                break;
            }
            i++;
        }
    }

    return cnt >= k;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    vector<pair<int,int>> v(n);

    for(int i = 0;i < n;i++){
        cin >> v[i].first >> v[i].second;
    }




    int l = 1;
    int r= n;
    int ans = 1;
    while(l <= r){
        int mid = l + (r-l)/2;

        if(ok(v,mid)){
            ans = mid;
            l = mid+1;
        }else{
            r = mid-1;
        }
    }

    cout << ans << endl;
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