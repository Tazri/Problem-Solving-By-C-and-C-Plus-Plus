// link : https://codeforces.com/problemset/problem/476/A
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
    int n, m;
    cin >> n >> m;

    if (n < m)
    {
        cout << -1 << endl;
        return;
    }

    int c = (n + 1) / 2;

    if (c % m != 0)
        c += (m - ((c % m)));

    if (c > n)
    {
        cout << -1 << endl;
        return;
    }
    cout << c << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}