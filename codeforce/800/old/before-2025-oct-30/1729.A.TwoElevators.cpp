// link : https://codeforces.com/problemset/problem/1729/A
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
    int a, b, c;
    cin >> a >> b >> c;
    int f1 = a - 1;
    int f2 = abs(b - c) + c - 1;

    if (f1 == f2)
        cout << 3 << endl;
    else if (f1 < f2)
        cout << 1 << endl;
    else
        cout << 2 << endl;
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