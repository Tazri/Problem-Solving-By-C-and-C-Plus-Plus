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
    int n,m;
    cin >>n >> m;

    vector<vector<int>> graph(n+1);

    for(int i = 1;i<= m;i++){
        int from,to;
        cin>> from >> to;

        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    int cnt = 0;
    for(int i = 1;i<= n;i++){
        if(graph[i].size() == 0){
            cout << "Brain Melt" << endl;
            return;
        }
    }

    vector<bool> vis(n+1,false);

    for(int i = 1;i<= n;i++){
        if(vis[i])continue;

        cnt++;

        queue<int> q;
        q.push(i);
        vis[i] = true;

        while(q.size() > 0){
            int from = q.front();
            q.pop();

            for(int to:graph[from]){
                if(vis[to])continue;
                vis[to]= true;
                q.push(to);
            }
        }
    }

    if(cnt > 1){
        cout << "Many" << endl;
        return;
    }

    int vcnt = 0;
    int found = 0;
    for(int i = 1;i <= n;i++){
        if(graph[i].size() == n-1){
            found =i ;
        }else if(graph[i].size() == 1){
            vcnt++;
        }
    }

    if(!(vcnt == n-1 && (found))){
        cout <<"Many" << endl;
        return;
    }

    vis = vector<bool>(n+1,false);
    int rt = found;
    vis[rt] = true;;

    for(int to:graph[rt]){
        vis[to] = true;
    }

    for(int i = 1;i<= n;i++){
        if(!vis[i]){
            cout << "Many" << endl;
            return;
        }
    }

    cout << 2 << endl;
    
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