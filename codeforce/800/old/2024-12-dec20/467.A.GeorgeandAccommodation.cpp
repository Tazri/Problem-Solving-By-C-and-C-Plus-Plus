// link : https://codeforces.com/problemset/problem/467/A
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
    int r;
    cin >> r;
    int ans = 0;

    while (r--)
    {
        int p, q;
        cin >> p >> q;

        if (q - p >= 2)
        {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}