// link : https://codeforces.com/problemset/problem/1761/B
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
    int d1 = -1;
    int d2 = -1;
    int d3 = -1;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        if (i == 0)
        {
            d1 = ai;
            continue;
        }

        if (d1 == ai)
            continue;
        else if (d1 != ai && d2 == -1)
        {
            d2 = ai;
            continue;
        }
        else if (d1 != ai && ai != d2)
            d3 = ai;
    }

    if (d3 != -1)
    {
        cout << n << endl;
        return;
    }
    if (d2 != -1)
    {
        int ans = ((n - 2) / 2) + 2;
        cout << ans << endl;
        return;
    }

    cout << 1 << endl;
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