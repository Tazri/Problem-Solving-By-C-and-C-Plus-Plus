// link : https://codeforces.com/contest/2193/problem/A
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
    int n, s, x;
    cin >> n >> s >> x;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;
        sum += vi;
    }

    if (sum > s)
    {
        cout << "NO" << endl;
        return;
    }

    int d = s - sum;

    if (d % x)
        cout << "NO" << endl;
    else
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