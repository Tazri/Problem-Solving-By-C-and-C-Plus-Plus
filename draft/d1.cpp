#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

vector<int> di = {0, 1, 0, -1};
vector<int> dj = {1, 0, -1, 0};

void program(int caseno)
{
    cout << "Case " << caseno << ": ";
    int n, m;
    cin >> m >> n;

    vector<string> mp(n);
    for (int i = 0; i < n; i++)
        cin >> mp[i];

    pair<int, int> start;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (mp[i][j] == '@')
            {
                start.first = i;
                start.second = j;
                break;
            }

    int cnt = 1;
    queue<pair<int, int>> q;
    q.push({start.first, start.second});
    mp[start.first][start.second] = '#';

    while (q.size())
    {
        pair<int, int> p = q.front();
        q.pop();
        int i = p.first;
        int j = p.second;

        for (int d = 0; d < 4; d++)
        {
            int ti = i + di[d];
            int tj = j + dj[d];

            if (ti >= 0 && tj >= 0 && ti < n && tj < m && mp[ti][tj] == '.')
            {
                cnt++;
                mp[ti][tj] = '#';
                q.push({ti, tj});
            }
        }
    }

    cout << cnt << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        program(i);
    return 0;
}