// link :https://codeforces.com/problemset/problem/1872/B
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

int mxStep(int d, int s)
{
    if (d == 1 && s == 1)
    {
        return 1;
    }

    if (d == 1)
    {
        s--;
        int step = s / 2;
        return step + 1;
    }

    if (s == 1)
    {
        return d;
    }

    int sc = s;
    if (s % 2 == 0)
    {
        sc -= 2;
    }
    return (sc / 2) + d;
}

void test()
{
    int n;
    cin >> n;

    int d, s;
    cin >> d >> s;
    int mn = mxStep(d, s);

    for (int i = 1; i < n; i++)
    {
        cin >> d >> s;
        mn = min(mxStep(d, s), mn);
    }

    cout << mn << endl;
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