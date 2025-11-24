// link : https://codeforces.com/problemset/problem/1537/C
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
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int i1 = 0;
    int i2 = 1;

    for (int i = 0; i < n - 1; i++)
    {
        int d = v[i + 1] - v[i];
        int prev = v[i2] - v[i1];

        if (d < prev)
        {
            i1 = i;
            i2 = i + 1;
        }
    }

    vector<int> ans(n, 0);
    int mn = min(v[i1], v[i2]);
    int mx = max(v[i1], v[i2]);
    ans[0] = mn;
    ans[n - 1] = mx;
    vector<int> rest;
    rest.reserve(n - 2);

    for (int i = 0; i < n; i++)
        if (i == i1 || i == i2)
            continue;
        else
            rest.push_back(v[i]);

    int rn = rest.size();

    vector<int> l1;
    l1.reserve(rn);
    vector<int> l2;
    l2.reserve(rn);

    for (int i = 0; i < rn; i++)
    {
        if (rest[i] >= mx)
            l1.push_back(rest[i]);
        else
            l2.push_back(rest[i]);
    }

    int ri = 1;
    for (int i = 0; i < l1.size(); i++)
        ans[ri++] = l1[i];

    for (int i = 0; i < l2.size(); i++)
    {
        ans[ri++] = l2[i];
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " \n"[i == n - 1];
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