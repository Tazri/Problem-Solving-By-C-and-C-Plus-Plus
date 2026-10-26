// link : https://codeforces.com/problemset/problem/977/F
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

    for(int i = 1;i <= n;i++){
        cin >> v[i];
    }


    map<int,int> mp;
    map<int,int> len;
    vector<int> vlen(n+1,1);
    
    vector<int> comeFrom(n+1,-1);

    for(int i = 1;i <= n;i++){
        int prev = v[i]-1;

        if(!mp.count(prev)){
            mp[v[i]]= i;
            len[v[i]] = 1;
            vlen[i] = 1;
            continue;
        }

        mp[v[i]] = i;
        len[v[i]] = len[prev]+1;
        vlen[i] = len[v[i]];
        comeFrom[i] = mp[prev];
    }

    int mx = *max_element(vlen.begin(),vlen.end());

    int strt = -1;
    for(int i= 1;i <= n;i++){
        if(vlen[i] == mx)strt = i;
    }

    int curr = strt;

    vector<int> ans;

    while(curr != -1){
        ans.push_back(curr);
        curr = comeFrom[curr];
    }

    reverse(ans.begin(),ans.end());
    cout<< ans.size() << endl;
    for(int i= 0;i < ans.size();i++){
        cout<< ans[i]<<" \n"[i == ans.size()-1];
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