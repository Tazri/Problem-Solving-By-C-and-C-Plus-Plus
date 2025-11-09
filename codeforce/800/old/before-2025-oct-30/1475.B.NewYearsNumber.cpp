// link : https://codeforces.com/problemset/problem/1475/B
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

    if (n < 2020)
    {
        cout << "NO" << endl;
        return;
    }

    int d = n / 2020;
    int r = n % 2020;
    d -= r;

    if (d < 0)
        cout << "NO" << endl;
    else if ((d * 2020) + (r * 2021) == n)
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