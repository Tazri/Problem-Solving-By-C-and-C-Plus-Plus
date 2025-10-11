// link : https://codeforces.com/problemset/problem/1659/A
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

char p = 'R';

void swap()
{
    p = p == 'R' ? 'B' : 'R';
}

void program()
{
    int n, r, b;
    cin >> n >> r >> b;

    if (r == b + 1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << p;
            swap();
        }
        cout << endl;
        p = 'R';
        return;
    }

    int pr = b + 1;
    int extra = r - pr;

    if (extra % pr == 0)
    {
        int t = extra / pr;

        for (int i = 0; i < pr; i++)
        {
            cout << 'R';
            for (int j = 0; j < t; j++)
                cout << 'R';

            if (i + 1 != pr)
                cout << 'B';
        }
        cout << endl;
        return;
    }

    int t = (extra + pr - 1) / pr;
    int l = extra % pr;

    for (int i = 0; i < pr; i++)
    {
        cout << 'R';
        for (int j = 0; j < t; j++)
            cout << 'R';

        if (i + 1 != pr)
            cout << 'B';

        l--;
        if (l == 0)
            t--;
    }

    cout << endl;
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