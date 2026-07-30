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

const ll mod = 1000000007;

void program()
{
    ll n;
    cin >> n;
    ll ans = 1;
    ll b = 2;
    while (n > 0)
    {
        if (n & 1)
        {
            ans *= b;
            n--;
        }
        else
        {
            b *= b;
            b %= mod;
            n /= 2;
        }

        ans = ans % mod;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}