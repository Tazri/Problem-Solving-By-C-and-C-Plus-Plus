// link : https://codeforces.com/problemset/problem/1326/A
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
    if (n == 1)
    {
        cout << -1 << endl;
        return;
    }

    int f = n - 1;
    int t = 1;

    if (f % 3 == 0)
    {
        f--;
        t++;
    }

    cout << 5;

    for (int i = 1; i < f; i++)
        cout << 5;
    for (int i = 0; i < t; i++)
        cout << 3;
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