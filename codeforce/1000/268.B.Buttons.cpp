// link : https://codeforces.com/problemset/problem/268/B
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
    int b = n - 1;
    int s = ((b + 1) * b) / 2;

    int ans = s;

    for (int i = n - 1; i >= 0; i--)
    {
        s -= i;
        ans += (s + 1);
    }

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    // int t;
    // cin >> t;
    // while (t--)
    program();
    return 0;
}