// link : https://www.codechef.com/problems/RIVALRY
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
    cout.precision(6);            \
    cout.setf(ios::fixed, ios::floatfield)

void program()
{
    int n;
    cin >> n;
    dl sum = 0;

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;
        sum += vi;
    }
    dl dn = n;
    dl ans = (sum / dn) * 4.0;
    cout << ans << endl;
}

int32_t main()
{
    optimize();
    fraction();
    int t = 1;
    // cin >> t;
    while (t--)
        program();
    return 0;
}