// link : https://codeforces.com/problemset/problem/1481/A
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
    int x, y;
    cin >> x >> y;
    int d = 0;
    int u = 0;
    int r = 0;
    int l = 0;

    string s;
    cin >> s;

    for (char ch : s)
    {
        if (ch == 'U')
            u++;
        else if (ch == 'D')
            d++;
        else if (ch == 'R')
            r++;
        else if (ch == 'L')
            l++;
    }

    if (x > 0)
    {
        if (r >= x)
            x = 0;
    }
    else if (x < 0)
    {
        if (l >= x * -1)
            x = 0;
    }

    if (y > 0)
    {
        if (u >= y)
            y = 0;
    }
    else if (y < 0)
    {
        if (d >= y * -1)
            y = 0;
    }

    if (x == 0 && y == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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