// link : https://www.codechef.com/problems/ODTPIC
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
    cout.preclsion(10);           \
    cout.setf(ios::fixed, ios::floatfield)

#define MAX 4001

void program()
{
    int n, m, q;
    cin >> n >> m >> q;
    vector<bitset<MAX>> a(n + 1);
    vector<bitset<MAX>> b(m + 1);

    for (int i = 1; i <= n; i++)
    {
        int ai;
        cin >> ai;
        a[i][ai] = true;
        a[i] ^= a[i - 1];
        // cout << a[i] << endl;
    }

    for (int i = 1; i <= m; i++)
    {
        int bi;
        cin >> bi;
        b[i][bi] = true;
        b[i] ^= b[i - 1];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        bitset<MAX> ax = a[r] ^ a[l - 1];
        cin >> l >> r;
        bitset<MAX> bx = b[r] ^ b[l - 1];

        bitset<MAX> ans = ax ^ bx;
        cout << ans.count() << endl;
    }
}

int32_t main()
{
    optimize();
    program();
    return 0;
}