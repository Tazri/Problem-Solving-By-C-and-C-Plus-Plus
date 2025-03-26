// link : https://codeforces.com/problemset/problem/2061/A
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

void test()
{
    int n;
    cin >> n;
    int e = 0, o = 0;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        if (t & 1)
            o++;
        else
            e++;
    }

    if (n == 1)
    {
        if (e)
        {
            cout << 1 << endl;
            return;
        }
        cout << 0 << endl;
        return;
    }

    if (n == o)
    {
        cout << o - 1 << endl;
        return;
    }

    if (n == e)
    {
        cout << 1 << endl;
        return;
    }

    cout << o + 1 << endl;
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