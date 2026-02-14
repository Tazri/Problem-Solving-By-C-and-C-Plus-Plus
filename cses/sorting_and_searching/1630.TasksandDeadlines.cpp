// link: https://cses.fi/problemset/task/1630/
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

#define int ll

void program()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a, d;
        cin >> a >> d;
        v[i] = a;
        ans += d;
    }

    sort(v.begin(), v.end());
    for (int i = 1; i < n; i++)
        v[i] += v[i - 1];

    for (int &vi : v)
        ans -= vi;

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}