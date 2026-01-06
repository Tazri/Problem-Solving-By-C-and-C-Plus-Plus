// link : https://eolymp.com/en/problems/10303
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
    cout.precision(4);            \
    cout.setf(ios::fixed, ios::floatfield)

void program()
{
    int n;
    cin >> n;
    dl ans = 0;

    for (int i = 1; i <= n; i++)
    {
        dl li = (double)i;
        ans += (1.0 / i);
    }

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    fraction();
    program();
    return 0;
}