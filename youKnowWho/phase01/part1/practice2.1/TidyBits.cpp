// link : https://toph.co/p/tidy-bits
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
    int cnt = __popcount(n);

    int ans = 0;
    for (int i = 1; i <= cnt; i++)
    {
        ans <<= 1;
        ans |= 1;
    }

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}