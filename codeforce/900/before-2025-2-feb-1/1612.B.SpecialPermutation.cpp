// link : https://codeforces.com/problemset/problem/1612/B
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

void test()
{
    int n, a, b;
    cin >> n >> a >> b;
    int h = n / 2;
    int r = h - 1;
    int eForA = n - a;

    if (b > a)
    {
        eForA--;
    }

    if (eForA < r)
    {
        cout << -1 << endl;
        return;
    }

    int eForB = n - (n - b + 1);

    if (a < b)
    {
        eForB--;
    }

    if (eForB < r)
    {
        cout << -1 << endl;
        return;
    }

    int ai = r;
    int i = n;

    cout << a;
    while (ai > 0)
    {
        if (i == b)
        {
            i--;
            continue;
        }
        cout << " " << i;
        i--;
        ai--;
    }

    int bi = r;
    i = 1;

    while (bi > 0)
    {
        if (i == a)
        {
            i++;
            continue;
        }
        cout << " " << i;
        i++;
        bi--;
    }
    cout << " " << b << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}