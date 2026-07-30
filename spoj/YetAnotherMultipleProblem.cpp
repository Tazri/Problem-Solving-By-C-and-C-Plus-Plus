// link : Yet Another Multiple Problem
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int n, int k, int _DIBBA_NO)
{
    cout << "Case " << _DIBBA_NO << ": ";

    set<int> st;
    for (int i = 0; i < k; i++)
    {
        int d;
        cin >> d;
        st.insert(d);
    }

    // if (st.size() >= 10)
    // {
    //     cout << -1 << endl;
    //     return;
    // }

    queue<int> q;
    vector<bool> visited(n + 1, false);
    vector<int> add(n + 1, -1);
    vector<int> comeFrom(n + 1, -1);
    for (int i = 1; i <= 9; i++)
    {
        if (st.count(i))
            continue;
        if (visited[i % n])
            continue;

        visited[i % n] = true;
        add[i % n] = i;
        q.push(i % n);
    }

    while (q.size() > 0)
    {
        int from = q.front();

        q.pop();

        for (int i = 0; i <= 9; i++)
        {
            if (st.count(i))
                continue;

            int to = (from * 10) + i;
            to %= n;
            if (visited[to])
                continue;

            add[to] = i;
            comeFrom[to] = from;
            visited[to] = true;
            q.push(to);
        }
    }

    if (!visited[0])
    {
        cout << -1 << endl;
        return;
    }

    int curr = 0;
    vector<int> v;
    while (curr != -1)
    {
        v.push_back(add[curr]);
        curr = comeFrom[curr];
    }

    reverse(v.begin(), v.end());
    for (int vi : v)
        cout << vi;
    cout << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int n, k;
    int t = 1;
    while (cin >> n >> k)
    {
        _DIBBA(n, k, t);
        t++;
    }
    return 0;
}