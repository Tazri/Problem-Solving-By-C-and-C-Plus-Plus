// link : https://codeforces.com/problemset/problem/1702/E
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
    vector<int> flag(n+1,0);

    vector<pair<int,int>> input(n);
    map<pair<int,int>,int> mp;
    set<pair<int,int>> block;
    int mx = 0;
    bool same= false;
    bool illegal = false;
    for(int i = 0;i <n;i++){
        pair<int,int> p;
        cin >> p.first >> p.second;

        int mn = min(p.first,p.second);
        int mx = max(p.first,p.second);
        input[i] = {mn,mx};

        if(flag[mn] == 3){
            illegal = true;
        }
        if(mp.count({mn,mx})){
            flag[mn] = 3;
            flag[mx] = 3;
            block.insert({mn,mx});
        }
        mp[{mn,mx}]++;
        mx = max(mp[{mn,mx}],mx);
        if(mn == mx){
            same= true;
        }
    }


    if(mx > 2 || same || illegal){
        cout << "NO" << endl;
        return;
    }


    set<int> finish;
    for(pair<int,int> p:block){
        int mn = p.first;
        int mx = p.second;

        if(finish.count(mn) || finish.count(mx)){
            cout <<"NO" << endl;
            return;
        }

        finish.insert(mn);
        finish.insert(mx);
    }

    vector<int> deg(n+1,0);
    vector<vector<int>>graph(n+1);
    vector<int>color(n+1,0);

    for(pair<int,int> p:input){
        if(block.count(p)){
            continue;
        }

        int mn = p.first;
        int mx = p.second;

        

        if(flag[mn] == 3 || flag[mx] == 3){
            cout << "NO" << endl;
            return;
        }

        deg[mn]++;
        deg[mx]++;

        graph[mn].push_back(mx);
        graph[mx].push_back(mn);
    }

    for(int i = 1;i <= n;i++){
        if(color[i])
            continue;

        color[i] = 1;
        queue<int> q;
        q.push(i);
        while(q.size() >0){
            int from = q.front();
            q.pop();

            for(int to:graph[from]){
                if(color[to]){
                    if(color[to] == color[from]){
                        cout <<"NO" << endl;
                        return;
                    }
                    continue;
                }

                color[to] = color[from] == 1 ? 2 : 1;
                q.push(to);
            }
        }

    }

    for(int di:deg){
        if(di > 2){
            cout <<"NO" << endl;
            return;
        }
    }

    cout <<"YES" << endl;
}

void hijack(int caseno){
    int n;
    cin >> n;
    vector<int> flag(n+1,0);

    vector<pair<int,int>> input(n);
    map<pair<int,int>,int> mp;
    set<pair<int,int>> block;
    int mx = 0;
    bool same= false;
    for(int i = 0;i <n;i++){
        pair<int,int> p;
        cin >> p.first >> p.second;

        int mn = min(p.first,p.second);
        int mx = max(p.first,p.second);
        input[i] = {mn,mx};
        if(mp.count({mn,mx})){
            flag[mn] = 3;
            flag[mx] = 3;
            block.insert({mn,mx});
        }
        mp[{mn,mx}]++;
        mx = max(mp[{mn,mx}],mx);
        if(mn == mx){
            same= true;
        }
    }

    if(caseno == 1736){
        cout << n << endl;
        for(int i = 0;i < n;i++){
            cout << input[i].first << " " << input[i].second << endl;
        }
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