// link : https://codeforces.com/contest/1811/problem/A
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
    int n, d;
    cin >> n >> d;
    string s;
    cin >> s;

    if (d == 9)
    {
        cout << 9 << s << endl;
        return;
    }

    if (d == 0)
    {
        cout << s << 0 << endl;
        return;
    }

    int k = -1;
    for (int i = 0; i < n; i++)
    {
        int si = (int)s[i] - (int)'0';
        if (d <= si)
        {
            k = i;
            continue;
        }
        break;
    }

    if (k == -1)
    {
        cout << d << s << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (i == k)
            cout << s[i] << d;
        else
            cout << s[i];
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