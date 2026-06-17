// link : https://codeforces.com/problemset/problem/2133/C
#include <bits/stdc++.h>

using namespace std;

int xToALlQuery(int x, int n)
{
    cout << "? " << x << " " << n;

    for (int i = 1; i <= n; i++)
        cout << " " << i;
    cout << endl;
    int ans;
    cin >> ans;
    return ans;
}

int query(int start, set<int> &st)
{
    cout << "? " << start << " " << st.size();

    for (int si : st)
        cout << " " << si;
    cout << endl;
    int ans;
    cin >> ans;
    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    vector<int> visited(n + 1, 0);

    int mx = 0;
    for (int i = 1; i <= n; i++)
    {
        visited[i] = xToALlQuery(i, n);

        if (i == 1)
            mx = visited[i];
        mx = max(visited[i], mx);
    }

    vector<vector<int>> li(mx + 1);

    for (int i = 1; i <= n; i++)
    {
        li[visited[i]].push_back(i);
    }

    vector<int> path;
    path.reserve(n);

    int tr = li[mx].back();
    path.push_back(tr);
    set<int> st;

    for (int i = 1; i <= n; i++)
        st.insert(i);

    li[mx].pop_back();

    while (li[mx].size() > 0)
    {
        st.erase(li[mx].back());
        li[mx].pop_back();
    }

    for (int ni = mx - 1; ni >= 1; ni--)
    {
        while (li[ni].size() > 0)
        {
            st.erase(li[ni].back());
            int rs = query(tr, st);

            if (rs != mx)
            {
                path.push_back(li[ni].back());
                st.insert(li[ni].back());
                li[ni].pop_back();
                break;
            }
            li[ni].pop_back();
        }

        while (li[ni].size() > 0)
        {
            st.erase(li[ni].back());
            li[ni].pop_back();
        }
    }
    cout << "! " << path.size();
    // reverse(path.begin(), path.end());
    for (int pi : path)
        cout << " " << pi;
    cout << endl;
}

int32_t main()
{
    // _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}