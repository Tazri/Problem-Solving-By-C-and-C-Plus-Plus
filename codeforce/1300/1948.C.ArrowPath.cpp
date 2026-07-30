// link : https://codeforces.com/problemset/problem/1948/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

// 4 direction
vector<int> di = {1, -1, 0, 0}; // dx
vector<int> dj = {0, 0, 1, -1}; // dy

pair<int, int> go(pair<int, int> p, char ch)
{
    if (ch == '<')
        p.second--;
    else
        p.second++;
    return p;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    int m = 2;
    cin >> n;
    vector<string> str(2);
    cin >> str[0];
    cin >> str[1];

    vector<vector<bool>> visited(2, vector<bool>(n, false));

    queue<pair<int, int>> q;
    visited[0][0] = true;
    pair<int, int> target = {1, n - 1};
    q.push({0, 0});

    while (q.size() > 0)
    {
        pair<int, int> from = q.front();
        int i = from.first;
        int j = from.second;
        q.pop();

        vector<pair<int, int>> firstStep;

        for (int d = 0; d < 4; d++)
        {
            int toi = i + di[d];
            int toj = j + dj[d];

            if (toi >= 2 || toi < 0 || toj < 0 || toj >= n)
                continue;

            firstStep.push_back({toi, toj});
        }

        for (pair<int, int> pr : firstStep)
        {
            if (pr == target)
            {
                cout << "YES" << endl;
                return;
            }

            visited[pr.first][pr.second] = true;
            pair<int, int> pto = go(pr, str[pr.first][pr.second]);

            if (visited[pto.first][pto.second])
                continue;

            visited[pto.first][pto.second] = true;
            if (pto == target)
            {
                cout << "YES" << endl;
                return;
            }
            q.push(pto);
        }
    }

    if (visited[target.first][target.second])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}