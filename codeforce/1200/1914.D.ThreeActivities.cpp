// link : https://codeforces.com/problemset/problem/1914/D#
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
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    vector<pair<int, int>> b(n);
    vector<pair<int, int>> c(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i].first;
        b[i].second = i;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i].first;
        c[i].second = i;
    }

    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    sort(c.rbegin(), c.rend());

    int mx = -1;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            if (a[i].second == b[j].second)
                continue;
            for (int k = 0; k < 3; k++)
            {
                if (a[i].second == c[k].second || b[j].second == c[k].second)
                    continue;

                int total = a[i].first + b[j].first + c[k].first;
                if (mx == -1)
                    mx = total;
                mx = max(mx, total);
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