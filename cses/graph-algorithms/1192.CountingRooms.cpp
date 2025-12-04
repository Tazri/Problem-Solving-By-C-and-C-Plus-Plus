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

int n, m;
vector<string> room;

bool isValid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m && room[i][j] == '.';
}

void program()
{
    cin >> n >> m;
    room = vector<string>(n);

    for (int i = 0; i < n; i++)
        cin >> room[i];

    int cnt = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (room[i][j] == '#')
                continue;

            cnt++;
            queue<pair<int, int>> q;
            q.push({i, j});
            room[i][j] = '#';

            while (q.size())
            {
                pair<int, int> p = q.front();
                int qi = p.first;
                int qj = p.second;
                q.pop();

                for (int d = 0; d < 4; d++)
                {
                    int ti = qi + di[d];
                    int tj = qj + dj[d];

                    if (isValid(ti, tj))
                    {
                        room[ti][tj] = '#';
                        q.push({ti, tj});
                    }
                }
            }
        }

    cout << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}