// link : https://codeforces.com/problemset/problem/1337/B
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
    int x, n, m;
    cin >> x >> n >> m;

    while (x)
    {
        if (n == 0 && m == 0)
        {
            cout << "NO" << endl;
            return;
        }

        if (n && m)
        {
            if ((x / 2) + 10 < x)
            {
                x = (x / 2) + 10;
                n--;
                continue;
            }
            else
            {
                x = max(x - 10, 0);
                m--;
            }
            continue;
        }

        if (m)
        {
            x = max(x - 10, 0);
            m--;
            continue;
        }

        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}