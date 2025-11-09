// link: https://codeforces.com/problemset/problem/1311/A
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
    int a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0 << endl;
        return;
    }

    int d = abs(b - a);

    if (b < a)
    {
        if (d & 1)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    else
    {
        if (d & 1)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
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