// link : https://atcoder.jp/contests/abc151/tasks/abc151_b?lang=en
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
    int n, k, m;
    cin >> n >> k >> m;

    int need = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int s;
        cin >> s;

        if (s > m)
        {
            need -= (s - m);
        }
        else
        {
            need += (m - s);
        }
    }

    if (need <= 0)
    {
        int extra = need * (-1);
        int pass = m - extra;

        if (pass <= 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << pass << endl;
        }
        return;
    }

    int pass = need + m;

    if (pass > k)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << pass << endl;
    }
}

int main()
{
    optimize();

    program();
    return 0;
}