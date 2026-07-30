// link : https://codeforces.com/contest/2106/problem/C
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    int sum = -1;
    int mx, mn;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (i == 0)
        {
            mx = a[i];
            mn = a[i];
        }
        else
        {
            mx = max(mx, a[i]);
            mn = min(mn, a[i]);
        }
    }

    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
    {
        if (b[i] == -1)
            continue;

        int s = a[i] + b[i];

        if (sum == -1)
        {
            sum = s;
            continue;
        }

        if (sum != s)
        {
            cout << 0 << endl;
            return;
        }
    }

    if (sum != -1)
    {
        if (mx > sum)
        {
            cout << 0 << endl;
            return;
        }

        int maxElement = sum - mn;

        if (maxElement > k)
        {
            cout << 0 << endl;
            return;
        }

        cout << 1 << endl;
        return;
    }

    int d = mx - mn;
    int can = k - d;

    cout << can + 1 << endl;
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