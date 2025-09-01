// link : https://codeforces.com/problemset/problem/1948/B
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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int last = -1;

    for (int ai : a)
    {
        // if empty
        if (last <= -1)
        {
            if (ai < 10)
                last = ai;
            else
            {
                int l = ai % 10;
                int f = ai / 10;

                if (f <= l)
                    last = l;
                else
                    last = ai;
            }

            continue;
        }

        // if ai 1-9
        if (ai < 10)
        {
            if (last > ai)
            {
                cout << "NO" << endl;
                return;
            }
            last = ai;
            continue;
        }

        int l = ai % 10;
        int f = ai / 10;

        if (f <= l && last <= f)
        {
            last = l;
            continue;
        }

        if (last <= ai)
        {
            last = ai;
            continue;
        }

        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
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