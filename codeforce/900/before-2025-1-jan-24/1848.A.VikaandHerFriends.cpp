// link : https://codeforces.com/problemset/problem/1848/A
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

bool isWhite(int x, int y)
{
    return (x & 1) == (y & 1);
}

void test()
{
    int n, m, k;
    cin >> n >> m >> k;

    int x, y;
    cin >> x >> y;

    int vCell = isWhite(x, y);
    bool isSame = false;

    for (int i = 0; i < k; i++)
    {
        cin >> x >> y;

        if (isWhite(x, y) == vCell)
        {
            isSame = true;
        }
    }

    if (isSame)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
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