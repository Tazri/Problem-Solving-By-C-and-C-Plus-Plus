// linK : https://codeforces.com/contest/2185/problem/D
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
    int n, m, h;
    cin >> n >> m >> h;
    vector<int> v(n + 1);
    vector<pair<int, int>> sys(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        sys[i].first = v[i];
        sys[i].second = 0;
    }

    int lastUpdate = 0;

    for (int ui = 1; ui <= m; ui++)
    {
        int b, c;
        cin >> b >> c;

        if (sys[b].second < lastUpdate)
            sys[b].first = v[b];

        if (sys[b].first + c <= h)
        {
            sys[b].first = sys[b].first + c;
            sys[b].second = ui;
            continue;
        }

        sys[b].first = v[b];
        sys[b].second = ui;
        lastUpdate = ui;
    }

    for (int i = 1; i <= n; i++)
    {
        if (sys[i].second >= lastUpdate)
            cout << sys[i].first;
        else
            cout << v[i];
        cout << " \n"[i == n];
    }
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}