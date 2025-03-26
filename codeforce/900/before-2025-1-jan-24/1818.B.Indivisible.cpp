// link : https://codeforces.com/problemset/problem/1818/B
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

void test()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    if (n & 1)
    {
        cout << -1 << endl;
        return;
    }

    cout << 2;
    for (int i = 2; i <= n; i++)
    {
        if (i & 1)
        {
            cout << " " << i + 1;
        }
        else
        {
            cout << " " << i - 1;
        }
    }

    cout << endl;
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