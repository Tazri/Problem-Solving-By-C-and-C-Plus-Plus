// link : https://codeforces.com/problemset/problem/1535/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

int fs(int n)
{
    return ((n + 1) * n) / 2;
}

void program()
{
    int n;
    cin >> n;

    vector<int> v;
    int mx = 1e5;
    vector<int> seive(1e5 + 123, 0);
    v.reserve(n);
    int even = 0;
    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;

        if (vi & 1)
        {
            v.push_back(vi);
            seive[vi]++;
        }
        else
            even++;
    }

    int ans = fs(even - 1) + v.size() * even;

    sort(v.begin(), v.end());

    // for (int vi : v)
    //     cout << vi << " ";
    // cout << endl;

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (gcd(v[i], v[j] * 2) > 1)
            {
                ans++;
            }
        }
    }

    cout << ans << endl;
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