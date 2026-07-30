#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

void sortedMiddle(vector<int> &v)
{
    int mn = v[0];
    for (int &vi : v)
    {
        mn = min(vi, mn);
    }

    int t = -1;
    for (int i = 0; i < v.size(); i++)
    {
        if (mn == v[i])
        {
            t = i;
            break;
        }
    }

    vector<int> f;
    f.reserve(v.size());

    for (int i = t; i < v.size(); i++)
        f.push_back(v[i]);

    for (int i = 0; i < t; i++)
        f.push_back(v[i]);

    for (int i = 0; i < v.size(); i++)
        v[i] = f[i];
}

void program()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vector<int> middle;
    middle.reserve(n);

    for (int i = 1; i <= n; i++)
    {
        if (x < i && i <= y)
        {
            middle.push_back(v[i]);
        }
    }

    sortedMiddle(middle);

    vector<int> others;
    for (int i = 1; i <= n; i++)
    {
        if (i <= x || y < i)
            others.push_back(v[i]);
    }

    int oi = 0;
    int mi = 0;
    vector<int> ans;

    while (oi < others.size() && others[oi] < middle[mi])
    {
        ans.push_back(others[oi]);
        oi++;
    }

    while (mi < middle.size())
    {
        ans.push_back(middle[mi]);
        mi++;
    }

    while (oi < others.size())
    {
        ans.push_back(others[oi]);
        oi++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " \n"[i == n - 1];
    }
}

int32_t main()
{
    optimize();

    int t = 1;
    cin >> t;
    while (t--)
        program();
    return 0;
}