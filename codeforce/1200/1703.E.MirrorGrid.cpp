// link : https://codeforces.com/problemset/problem/1703/E
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

void rotate(vector<vector<int>> &m, vector<vector<int>> &r)
{
    int n = m.size();
    r = vector<vector<int>>(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            r[j][i] = m[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        reverse(r[i].begin(), r[i].end());
    }
}

void program()
{
    int n;
    cin >> n;
    vector<vector<int>> r1(n, vector<int>(n));
    vector<char> mp((n * n) + 12, 0);

    int indx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char ch;
            cin >> ch;
            mp[indx] = ch;
            r1[i][j] = indx++;
        }
    }

    vector<vector<int>> r2;
    vector<vector<int>> r3;
    vector<vector<int>> r4;
    rotate(r1, r2);
    rotate(r2, r3);
    rotate(r3, r4);

    vector<bool> visited(n * n, false);

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            vector<int> vi;
            vi.reserve(4);

            vi.push_back(r1[i][j]);
            vi.push_back(r2[i][j]);
            vi.push_back(r3[i][j]);
            vi.push_back(r4[i][j]);

            if (visited[vi.front()])
                continue;

            for (int vii : vi)
                visited[vii] = true;

            int zero = 0;
            int one = 0;

            for (int vii : vi)
                if (mp[vii] == '0')
                    zero++;
                else
                    one++;

            cnt += min(zero, one);
        }
    }

    cout << cnt << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}