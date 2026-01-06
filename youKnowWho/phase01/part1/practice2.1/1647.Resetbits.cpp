// link : https://eolymp.com/en/problems/1647
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
    int n, k;
    cin >> n >> k;

    if (k == 0)
    {
        cout << n << endl;
        return;
    }

    n >>= k;
    n <<= k;
    cout << n << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}