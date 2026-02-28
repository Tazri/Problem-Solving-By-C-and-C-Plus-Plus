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

int sz = 1e6 + 123;
vector<int> spf;

void build_spf(int n, vector<int> &spf)
{
    spf.assign(n + 1, 0);
    for (int i = 2; i <= n; i++)
        spf[i] = i;

    for (int i = 4; i <= n; i += 2)
        spf[i] = 2;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= n; j += 2 * i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

void program()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    bool sorted = true;

    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] > v[i])
        {
            sorted = false;
            break;
        }
    }

    if (sorted)
    {
        cout << "Bob" << endl;
        return;
    }

    vector<vector<int>> f(n);

    for (int i = 0; i < n; i++)
    {
        int vi = v[i];
        if (vi == 1)
        {
            f[i].push_back(1);
            continue;
        }
        while (vi > 1)
        {
            f[i].push_back(spf[vi]);
            vi /= spf[vi];
        }
    }

        vector<int> sv;
    sv.reserve(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < f[i].size(); j++)
        {
            if (f[i][j] != f[i][j - 1])
            {
                cout << "Alice" << endl;
                return;
            }
        }

        sv.push_back(f[i][0]);
    }

    sorted = true;
    for (int i = 1; i < sv.size(); i++)
    {
        if (sv[i - 1] > sv[i])
        {
            sorted = false;
            break;
        }
    }

    if (sorted)
    {
        cout << "Bob" << endl;
    }
    else
    {
        cout << "Alice" << endl;
    }
}

int32_t main()
{
    optimize();
    build_spf(sz, spf);
    int t = 1;
    cin >> t;
    while (t--)
        program();
    return 0;
}