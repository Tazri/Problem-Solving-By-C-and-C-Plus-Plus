// link : https://codeforces.com/contest/1629/problem/C
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
    vector<int> v(n);
    vector<int> mp(n+1);

    for(int i= 0;i < n;i++){
        cin >> v[i];
        
        mp[v[i]]++;
    }

    vector<int> ans;
    int i = 0;
    while(i < n){
        int mex = 0;

        if(mp[mex] <= 0){
            ans.push_back(mex);
            i++;
            continue;
        }

        set<int> st;

        while(mp[mex] > 0){

            mp[v[i]]--;
            st.insert(v[i]);

            while(st.count(mex))
                mex++;
            i++;
        }

        ans.push_back(mex);
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