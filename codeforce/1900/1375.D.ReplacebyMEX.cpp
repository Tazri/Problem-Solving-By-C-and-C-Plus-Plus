// link : https://codeforces.com/problemset/problem/1375/D
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

    vector<int> v(n+1);
    vector<int> mp(n+123,0);

    for(int i = 1;i <= n;i++){
        cin >> v[i];
        mp[v[i]]++;
    }

    vector<bool> has(n+123,false);
    vector<int> rep;
    rep.reserve(n+1);
    for(int i= n;i >= 1;i--){
        if(!has[v[i]]){
            has[v[i]] = true;
            continue;
        }

        rep.push_back(i);
    }

    vector<int> ans;
    ans.reserve(2*n+123);

    int mex = 0;
    while(mex <= n && has[mex])
        mex++;
    
    
    while(mex <= n && v[mex] != mex){
        int vi = v[mex];
        ans.push_back(mex);
        v[mex] = mex;

        mp[mex]++;
        mp[vi]--;
        mex = 0;
        while(mp[mex] > 0)mex++;
    }
    
    for(int i = 1;i <= n;i++){
        if(v[i] == i)continue;

        ans.push_back(i);
        int vi = v[i];
        mp[vi]--;
        mp[0]++;
        v[i] = 0;
        mex = 0;
        while(mp[mex] > 0)mex++;

        while(mex <= n && v[mex] != mex){
            int vi = v[mex];
            ans.push_back(mex);
            v[mex] = mex;

            mp[mex]++;
            mp[vi]--;
            
            mex = 0;
            while(mp[mex] > 0)mex++;
        }   

    }

    cout << ans.size() << endl;

    for(int i = 0;i < ans.size();i++)
        cout << ans[i] << " \n"[i == ans.size()-1]; 
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