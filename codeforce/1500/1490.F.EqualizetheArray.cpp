// link : https://codeforces.com/problemset/problem/1490/F
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
    map<int, int> mp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;
        mp[vi]++;
    }

    vector<int> v;
    v.push_back(0);

    for (pair<int, int> p : mp)
        v.push_back(p.second);

    n = (int)v.size() - 1;
    vector<int> pre(n + 1);
    sort(v.begin(), v.end());

    for (int i = 1; i <= n; i++)
        pre[i] += pre[i - 1] + v[i];

    // cout << n << endl;

    // for (int vi : v)
    //     cout << vi << " ";
    // cout << endl;
    // for (int vi : pre)
    //     cout << vi << " ";
    // cout << endl;

    int sum = pre.back();
    int mn = -1;
    for (int i = 1; i <= n; i++)
    {
        int rightElements = n - i;
        int rightSum = sum - pre[i];
        int rightRemove = rightSum - (v[i] * rightElements);
        int leftRemove = pre[i] - v[i];
        int totalRemove = rightRemove + leftRemove;

        if (mn == -1)
            mn = totalRemove;
        mn = min(totalRemove, mn);
    }

    cout << mn << endl;
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