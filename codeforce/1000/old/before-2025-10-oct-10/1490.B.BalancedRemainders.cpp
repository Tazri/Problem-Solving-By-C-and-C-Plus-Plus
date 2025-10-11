// link : https://codeforces.com/problemset/problem/1490/B
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
    int c0 = 0, c1 = 0, c2 = 0;
    int h = n / 3;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        int r = ai % 3;

        if (r == 0)
            c0++;
        else if (r == 1)
            c1++;
        else
            c2++;
    }

    if (c0 == c1 && c1 == c2)
    {
        cout << 0 << endl;
        return;
    }

    int ans = 0;
    int extra = 0;
    if (c0 > h)
    {
        extra = c0 - h;
        c0 = h;

        if (c1 < h)
        {
            int need = h - c1;

            if (extra >= need)
            {
                c1 += need;
                ans += need;
                extra -= need;
            }
            else
            {
                c1 += extra;
                ans += extra;
                extra -= extra;
            }
        }

        if (extra)
        {
            c2 += extra;
            ans += extra * 2;
        }
    }

    if (c1 > h)
    {
        extra = c1 - h;
        c1 = h;

        if (c2 < h)
        {
            int need = h - c2;

            if (extra >= need)
            {
                c2 += need;
                ans += need;
                extra -= need;
            }
            else
            {
                c2 += extra;
                ans += extra;
                extra -= extra;
            }
        }

        if (extra)
        {
            c0 += extra;
            ans += (extra * 2);
        }
    }

    if (c2 > h)
    {
        extra = c2 - h;
        c2 = h;

        if (c0 < h)
        {
            int need = h - c0;

            if (extra >= need)
            {
                c0 += need;
                ans += need;
                extra -= need;
            }
            else
            {
                c0 += extra;
                ans += extra;
                extra -= extra;
            }
        }

        if (extra)
        {
            c1 += extra;
            ans += (extra * 2);
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
        program();
    return 0;
}