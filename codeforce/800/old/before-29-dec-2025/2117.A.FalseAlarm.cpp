// link : https://codeforces.com/contest/2117/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    int n, x;
    cin >> n >> x;
    int l = -1;
    int r = -1;

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;

        if (vi == 0)
            continue;

        if (l == -1)
        {
            l = i;
        }

        r = i;
    }

    if (l == -1)
    {
        cout << "YES" << endl;
        return;
    }

    int d = r - l + 1;

    if (d <= x)
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