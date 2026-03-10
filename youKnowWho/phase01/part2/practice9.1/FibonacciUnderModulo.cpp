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
int mod = 998244353;

void program()
{
    int n;
    cin >> n;

    if (n <= 2)
    {
        cout << 1 << endl;
        return;
    }

    int f1 = 1;
    int f2 = 1;

    for (int i = 3; i <= n; i++)
    {
        int f = f1 + f2;
        f %= mod;
        f1 = f2;
        f2 = f;
    }

    cout << f2 << endl;
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