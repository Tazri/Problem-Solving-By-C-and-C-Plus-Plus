// link : https://codeforces.com/contest/2210/problem/D
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

vector<int> takeIdentity(string &s)
{
    int n = s.size();
    vector<vector<int>> graph(n + 1);

    int id = 1;
    stack<int> stk;
    stk.push(0);

    for (int i = 0; i < n; i++)
    {
        char ch = s[i];

        if (ch == ')')
        {
            stk.pop();
            continue;
        }

        int from = stk.top();
        int to = id++;
        graph[from].push_back(to);
        stk.push(to);
    }

    int rt = 0;
    int reserve = 1;

    while (graph[rt].size() == 1)
    {
        reserve++;
        rt = graph[rt].back();
    }

    vector<int> directChilds;

    for (int to : graph[rt])
        directChilds.push_back(to);

    int onlyChild = 0;

    for (int ds : directChilds)
    {
        queue<int> q;
        q.push(ds);

        while (q.size() > 0)
        {
            int parent = q.front();
            q.pop();

            if (graph[parent].size() >= 1)
                onlyChild++;

            for (int child : graph[parent])
            {
                q.push(child);
            }
        }
    }

    int mn = 0;
    for (int ds : directChilds)
    {
        if (graph[ds].size() > 0)
        {
            mn = 1;
            break;
        }
    }

    int leaf = max(mn, onlyChild);

    queue<int> q;
    q.push(rt);
    int cnt = 0;

    while (q.size() > 0)
    {
        int from = q.front();
        q.pop();

        for (int to : graph[from])
        {
            cnt++;
            q.push(to);
        }
    }

    int child = cnt - leaf;

    vector<int> identity = {reserve, child, leaf};
    return identity;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    string s, t;
    cin >> s;
    cin >> t;

    vector<int> ids = takeIdentity(s);
    vector<int> idt = takeIdentity(t);

    // for (int i : ids)
    //     cout << i << " ";
    // cout << endl;

    if (ids == idt)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

// void hijack(int caseno)
// {
//     int n;
//     cin >> n;
//     string s;
//     string t;
//     cin >> s >> t;

//     if (caseno == 575)
//     {
//         cout << n << endl;
//         cout << s << endl;
//         cout << t << endl;
//     }
// }

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    // if (t == 10000)
    //     for (int i = 1; i <= t; i++)
    //         hijack(i);
    // else
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}