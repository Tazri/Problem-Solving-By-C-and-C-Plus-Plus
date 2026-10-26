// link : https://codeforces.com/problemset/problem/1118/C
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

    vector<vector<bool>> vis(n+1,vector<bool>(n+1,false));

    map<int,int> mp;

    for(int i = 0;i < n*n;i++){
        int vi;
        cin>> vi;
        mp[vi]++;
    }

    priority_queue<pair<int,int>> pq;
    for(pair<int,int> p:mp)
        pq.push({p.second,p.first});

    pair<int,int> p = pq.top();


    vector<vector<pair<int,int>>> li;
    vector<pair<int,int>> record;
    int index = 0;
    for(int i = 1;i<= n;i++){
        for(int j = 1;j <= n;j++){
            if(vis[i][j]){
                continue;
            }

            vector<pair<int,int>> pv;
            set<pair<int,int>> st;
            st.insert({i,j});
            st.insert({n-i+1,j});
            st.insert({i,n-j+1});
            st.insert({n-i+1,n-j+1});

            for(pair<int,int> pr:st){
                vis[pr.first][pr.second] = true;
                pv.push_back(pr);
            }

            li.push_back(pv);
            record.push_back({pv.size(),index++});
        }
    }

    vector<vector<int>> ans(n+1,vector<int>(n+1));

    sort(record.rbegin(),record.rend());
    for(pair<int,int> pr:record){
        int id = pr.second;
        int sz = pr.first;

        pair<int,int> tp = pq.top();
        pq.pop();
        int mark = tp.second;

        if(tp.first < sz){
            cout << "NO" << endl;
            return;
        }

        tp.first -= sz;
        if(tp.first >0){
            pq.push(tp);
        }

        for(pair<int,int> cell:li[id]){
            int i = cell.first;
            int j = cell.second;
            ans[i][j] = mark;
        }
    }

    cout <<"YES" << endl;
    for(int i= 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            cout << ans[i][j] << " \n"[j == n];
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