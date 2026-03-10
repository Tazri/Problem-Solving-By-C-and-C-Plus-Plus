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

int modpow(int x, int n, int mod)
{
    x %= mod;
    int ans = 1;

    for (int i = 0; i <= 61; i++)
    {
        if (n & 1)
        {
            ans *= x;
            ans %= mod;
        }
        x = x * x % mod;
        n >>= 1;
    }

    return ans;
}

void program(int b, int p, int m)
{
    cout << modpow(b, p, m) << endl;
}

int32_t main()
{
    optimize();
    ll b, p, m;

    while (cin >> b >> p >> m)
        program(b, p, m);
    return 0;
}