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

void program()
{
    int n, m;
    cin >> n >> m;
    vector<multiset<int>> v(n + 1);
    vector<int> sums(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        v[y].insert(x);
        sums[y] += x;

        if (v[y].size() > y + 1)
        {
            int rm = *v[y].begin();
            sums[y] -= rm;
            v[y].erase(v[y].find(rm));
        }
    }
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v[y].insert(x);
        sums[y] += x;
        bool removed = false;
        int rm;
        if (v[y].size() > y + 1)
        {
            rm = *v[y].begin();
            removed = true;
            sums[y] -= rm;
            v[y].erase(v[y].find(rm));
        }

        ans.push_back(sums[y]);
        sums[y] -= x;

        if (removed)
        {
            sums[y] += rm;
            v[y].insert(rm);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " \n"[ans.size() - 1 == i];
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