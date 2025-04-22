// link : https://codeforces.com/problemset/problem/1929/B
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
    int d = n + (n - 2);
    int d2 = d * 2;
    int ans;

    if (k <= d2)
    {
        ans = (k + 1) / 2;
    }
    else
    {
        ans = d;
        k -= d2;
        ans += k;
    }

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