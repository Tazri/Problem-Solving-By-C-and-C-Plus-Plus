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

    vector<vector<int>> v(n);
    vector<int> mp(m + 1);
    vector<int> cnts;
    cnts.reserve(n);
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v[i].reserve(k);

        for (int j = 0; j < k; j++)
        {
            int ai;
            cin >> ai;
            v[i].push_back(ai);
            mp[ai]++;
        }
    }

    for (int i = 1; i <= m; i++)
    {
        if (!mp[i])
        {
            cout << "NO" << endl;
            return;
        }
    }

    for (int i = 0; i < n; i++)
    {
        int mn = -1;
        for (int j = 0; j < v[i].size(); j++)
        {
            int ai = v[i][j];

            if (mn == -1)
                mn = mp[ai];
            else
                mn = min(mn, mp[ai]);
        }

        cnts.push_back(mn);
    }

    int cnt = 0;
    for (int &ci : cnts)
    {
        if (ci > 1)
            cnt++;
    }

    if (cnt > 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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