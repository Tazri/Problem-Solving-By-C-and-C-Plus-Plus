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

#define endl '\n'

int sz = 1e6 + 11;
vector<int> sod;
vector<int> v(sz + 1);
vector<int> spf;
void build_sod(int n, vector<int> &sod)
{
    sod.assign(n + 1, 1);
    sod[0] = 0;

    for (int i = 2; i <= n; i++)
        for (int j = i; j <= n; j += i)
            sod[j] += i;
}

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

void build()
{
    build_sod(sz, sod);
    build_spf(3e6, spf);

    // cout << spf[13] << endl;

    for (int i = 1; i <= sz; i++)
        if (spf[sod[i]] == sod[i])
            v[i] = 1;

    for (int i = 1; i <= sz; i++)
        v[i] += v[i - 1];
}
void program()
{
    int l, r;
    cin >> l >> r;

    cout << v[r] - v[l - 1] << endl;
}

int32_t main()
{
    optimize();
    build();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}