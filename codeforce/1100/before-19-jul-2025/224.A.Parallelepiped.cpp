// link : https://codeforces.com/problemset/problem/224/A
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

ll rt(ll n)
{
    for (ll i = 1; i * i <= n; i++)
    {
        if (i * i == n)
            return i;
    }

    return -1;
}

void program()
{
    ll ab, bc, ac;
    cin >> ab >> bc >> ac;

    ll aa = (ab * ac) / bc;
    ll bb = (ab * bc) / ac;
    ll cc = (bc * ac) / ab;

    ll a = rt(aa);
    ll b = rt(bb);
    ll c = rt(cc);

    ll ans = 4 * a + 4 * b + 4 * c;

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}