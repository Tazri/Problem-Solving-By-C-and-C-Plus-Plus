// link : https://codeforces.com/problemset/problem/1632/B
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
    n--;

    if (n == 0)
    {
        cout << 0 << endl;
        return;
    }

    if (n == 1)
    {
        cout << 1 << " " << 0 << endl;
        return;
    }

    if (n == 2)
    {
        cout << "2 0 1" << endl;
        return;
    }

    if (n == 3)
    {
        cout << "2 3 1 0" << endl;
        return;
    }

    int pow = 0;
    int cn = n;
    while (cn)
    {
        pow++;
        cn >>= 1;
    }
    pow--;

    int pn = 1;

    for (int i = 0; i < pow; i++)
    {
        pn *= 2;
    }

    for (int i = 1; i < pn; i++)
        cout << i << " ";

    cout << 0;

    for (int i = pn; i <= n; i++)
    {
        cout << " " << i;
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