// link : https://codeforces.com/problemset/problem/1714/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

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
    int s;
    cin >> s;
    int d = 0;
    for (int i = 9; i >= 1; i--)
    {
        if (s == 0)
            break;
        if (i > s)
            continue;
        s -= i;
        d = (d * 10) + i;
    }

    int ans = 0;

    while (d)
    {
        int di = d % 10;
        ans = (ans * 10) + di;
        d /= 10;
    }

    cout << ans << endl;
}

int32_t main()
{
    optimize();

    int t = 1;
    cin >> t;
    while (t--)
        program();
    return 0;
}