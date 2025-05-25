// link : https://codeforces.com/problemset/problem/1695/A
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

void program()
{
    int n, m;
    cin >> n >> m;

    int mx;
    int ti;
    int tj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int gij;
            cin >> gij;

            if (i == 0 && j == 0)
                mx = gij;
            else
                mx = max(gij, mx);

            if (gij == mx)
            {
                ti = i;
                tj = j;
            }
        }
    }

    int h = max(ti + 1, n - ti);
    int w = max(tj + 1, m - tj);
    int ans = h * w;
    cout << ans << endl;
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