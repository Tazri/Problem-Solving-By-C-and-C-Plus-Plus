// link : https://codeforces.com/problemset/problem/913/A

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

#define int ll

void program()
{
    int n, m;
    cin >> n >> m;
    int d = 1;
    int limit = (ll)1e8;

    for (int i = 1; i <= n; i++)
    {
        d *= 2;
        if (d > limit)
            break;
    }

    cout << m % d << endl;
}

int32_t main()
{
    optimize();

    int t = 1;
    // cin >> t;
    while (t--)
        program();
    return 0;
}