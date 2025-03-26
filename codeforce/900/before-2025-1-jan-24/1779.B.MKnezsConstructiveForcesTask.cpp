// link : https://codeforces.com/problemset/problem/1779/B
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
    if (n == 3 || n == 1)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    if (n % 2 == 0)
    {
        cout << 1;
        for (int i = 1; i < n; i++)
        {
            if (i & 1)
            {
                cout << " " << -1;
            }
            else
            {
                cout << " " << 1;
            }
        }
        cout << endl;
        return;
    }

    int a = n / 2;
    int b = a - 1;
    a *= -1;
    cout << b;
    for (int i = 1; i < n; i++)
    {
        if (i & 1)
        {
            cout << " " << a;
        }
        else
        {
            cout << " " << b;
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