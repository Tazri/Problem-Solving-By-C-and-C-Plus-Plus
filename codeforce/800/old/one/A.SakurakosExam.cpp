// link : https://codeforces.com/problemset/problem/2008/A

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

int main()
{
    optimize();
    int t;

    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (a & 1)
        {
            cout << "NO" << endl;
            continue;
        }

        if (b % 2 == 0)
        {
            cout << "YES" << endl;
            continue;
        }

        if (!a)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
    }
    return 0;
}