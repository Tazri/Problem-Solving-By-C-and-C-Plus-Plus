// link : https://codeforces.com/problemset/problem/1763/A
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
    int n;
    cin >> n;
    int mn = 0;
    int mx = -1;

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;

        if (i == 0)
        {
            mn = vi;
            mx = vi;
        }
        mn &= vi;
        mx |= vi;
    }

    cout << (mx - mn) << endl;
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