// link : https://codeforces.com/contest/2266/problem/D
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
    set<int> st;

    for(int i = 1;i <= n;i++){
        int vi;
        cin>> vi;
        st.insert(vi-i);
    }

    vector<int> v;
    v.reserve(n);

    for(int si:st)v.push_back(si);

    n = v.size();

    int len = 1;
    int mx = 1;
    for(int i  = 1;i < n;i++){
        if(v[i]-v[i-1] == 1){
            len++;
        }else{
            mx= max(mx,len);
            len = 1;
        }
    }
    mx = max(len,mx);
    cout << mx << endl;
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