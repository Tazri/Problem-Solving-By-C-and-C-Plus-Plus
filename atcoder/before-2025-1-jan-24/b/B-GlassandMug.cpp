// link : https://atcoder.jp/contests/abc332/tasks/abc332_b?lang=en
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

int main()
{
    optimize();
    int k, g, m;
    cin >> k >> g >> m;
    int glass = 0;
    int mug = 0;

    for (int i = 0; i < k; i++)
    {
        if (glass >= g)
        {
            glass = 0;
            continue;
        }

        if (mug <= 0)
        {
            mug = m;
            continue;
        }

        glass += mug;
        mug = 0;
        if (glass > g)
        {
            mug = glass - g;
            glass = g;
        }
    }

    cout << glass << " " << mug << endl;
    return 0;
}