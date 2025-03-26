// link : https://codeforces.com/problemset/problem/2039/B
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
    string w;
    cin >> w;

    if (w.size() <= 1)
    {
        cout << -1 << endl;
        return;
    }

    if (w.size() == 2)
    {
        if (w[0] == w[1])
        {
            cout << w << endl;
            return;
        }

        cout << -1 << endl;
        return;
    }

    // check two same
    for (int i = 1; i < w.size(); i++)
    {
        if (w[i] == w[i - 1])
        {
            cout << w[i - 1] << w[i] << endl;
            return;
        }
    }

    // check distict
    for (int i = 2; i < w.size(); i++)
    {
        char a = w[i - 2];
        char b = w[i - 1];
        char c = w[i];

        if (a == b || b == c || a == c)
        {
            continue;
        }

        cout << a << b << c << endl;
        return;
    }

    cout << -1 << endl;
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