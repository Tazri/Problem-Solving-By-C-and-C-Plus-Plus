// link : https://codeforces.com/problemset/problem/1995/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void test()
{
    int n, k;

    cin >> n >> k;

    if (k <= 0)
    {
        cout << 0 << endl;
        return;
    }
    if (n * n <= k)
    {
        cout << 2 * n - 1 << endl;
        return;
    }

    int ans = 1;
    int time = 0;
    k -= n;
    n--;

    while (k > 0)
    {
        k -= n;
        time++;
        ans++;

        if (time >= 2)
        {
            n--;
            time = 0;
        }
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}