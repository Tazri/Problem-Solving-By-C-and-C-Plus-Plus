// link : https://codeforces.com/problemset/problem/1879/D
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

    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        v[i] ^= v[i - 1];
    }

    int ans = 0;

    for (int j = 0; j < 30; j++)
    {
        int zeroCnt = 0;
        int oneCnt = 0;
        int zeroLen = 0;
        int oneLen = 0;
        int mask = 1 << j;

        for (int i = 0; i <= n; i++)
        {
            if (v[i] & mask)
            {
                int total = (i * zeroCnt) - zeroLen;
                ans += (((total % mod) * mask) % mod);
                ans %= mod;
            }
            else
            {
                int total = (i * oneCnt) - oneLen;
                ans += (((total % mod) * mask) % mod);
                ans %= mod;
            }

            if (v[i] & mask)
            {
                oneCnt++;
                oneLen += i;
            }
            else
            {
                zeroCnt++;
                zeroLen += i;
            }
        }
    }
    cout << ans << endl;
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