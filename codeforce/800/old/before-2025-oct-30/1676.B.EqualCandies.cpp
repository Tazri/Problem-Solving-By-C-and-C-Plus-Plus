// link : https://codeforces.com/problemset/problem/1676/B
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

    int mn;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i == 0)
            mn = v[i];

        mn = min(v[i], mn);
    }

    int ans = 0;

    for (int &vi : v)
        ans += abs(mn - vi);

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