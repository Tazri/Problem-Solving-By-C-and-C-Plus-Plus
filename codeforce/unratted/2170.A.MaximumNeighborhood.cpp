// link : https://codeforces.com/contest/2170/problem/A
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

vector<int> di = {0, 0, +1, -1};
vector<int> dj = {+1, -1, 0, 0};

void program()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));

    int vi = 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            v[i][j] = vi++;

    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sum = v[i][j];

            for (int d = 0; d < 4; d++)
            {
                int ti = i + di[d];
                int tj = j + dj[d];

                if (ti >= n || ti < 0 || tj >= n || tj < 0)
                    continue;
                sum += v[ti][tj];
            }

            mx = max(sum, mx);
        }
    }

    cout << mx << endl;
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