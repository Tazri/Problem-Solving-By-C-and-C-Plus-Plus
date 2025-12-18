// link : https://codeforces.com/problemset/problem/1360/D
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
    int n, k;
    cin >> n >> k;

    if (k >= n)
    {
        cout << 1 << endl;
        return;
    }

    int mx = 1;
    for (int i = 1; i * i <= n && i <= k; i++)
    {
        if (n % i != 0)
            continue;

        int d1 = i;
        int d2 = n / i;

        mx = max(d1, mx);
        if (d2 <= k)
            mx = max(d2, mx);
    }

    int ans = n / mx;

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