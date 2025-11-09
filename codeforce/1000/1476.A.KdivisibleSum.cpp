// link : https://codeforces.com/contest/1476/problem/A
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

    if (n == 1)
    {
        cout << k << endl;
        return;
    }
    else if (n == k || k == 1)
    {
        cout << 1 << endl;
        return;
    }
    else if (n <= k)
    {
        int ans = (k + n - 1) / n;
        cout << ans << endl;
        return;
    }

    if (n % k == 0)
        cout << 1 << endl;
    else
        cout << 2 << endl;
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