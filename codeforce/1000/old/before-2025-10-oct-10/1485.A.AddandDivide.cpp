// link : https://codeforces.com/problemset/problem/1485/A
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

int takes(int a, int b)
{
    int op = 0;

    while (a)
    {
        op++;
        a /= b;
    }

    return op;
}

void program()
{
    int a, b;
    cin >> a >> b;
    int times = 0;

    if (b == 1)
    {
        times++;
        b++;
    }

    int mn = times + takes(a, b);
    int h = a / 2;
    for (int i = b + 1; i <= h + 1; i++)
    {
        times++;
        if (times >= mn)
            break;

        int op = takes(a, i);
        mn = min(mn, times + op);
    }
    cout << mn << endl;
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