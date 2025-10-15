// link : https://codeforces.com/problemset/problem/2091/B
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
    int n, x;
    cin >> n >> x;
    int ans = 0;

    vector<int> v;
    v.reserve(n);

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;
        if (vi < x)
            v.push_back(vi);
        else
            ans++;
    }

    sort(v.rbegin(), v.rend());

    int len = 0;
    for (int i = 0; i < v.size(); i++)
    {
        len++;
        if (v[i] * len >= x)
        {
            ans++;
            len = 0;
            continue;
        }
    }

    cout << ans << endl;
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