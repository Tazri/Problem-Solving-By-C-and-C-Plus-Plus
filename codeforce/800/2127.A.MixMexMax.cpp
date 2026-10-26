// link : https://codeforces.com/problemset/problem/2127/A
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
    bool zero = false;
    for(int i = 0;i < n;i++){
        int vi;
        cin >> vi;
        
        if(vi == 0)zero = true;
        if(vi >= 0)st.insert(vi);
    }

    if(zero){
        cout <<"NO" << endl;
        return;
    }

    if(st.size() <= 1){
        cout <<"YES" << endl;
    }else{
        cout<<"NO" << endl;
    }
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