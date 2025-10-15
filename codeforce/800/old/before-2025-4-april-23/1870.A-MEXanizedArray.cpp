// link : https://codeforces.com/problemset/problem/1870/A
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
    int n, k, x;

    cin >> n >> k >> x;

    if (n < k || x < (k - 1))
    {
        cout << -1 << endl;
        return;
    }

    int l = k - 1;
    int ans = (l * (l + 1)) / 2;
    int m = x == k ? x - 1 : x;
    int left = n - k;
    ans += (left * m);

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