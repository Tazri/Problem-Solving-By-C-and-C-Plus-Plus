// link : https://www.codechef.com/problems/NONNEGPROD?tab=statement
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
    int neg = 0;
    int zero = 0;
    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;
        if (vi < 0)
            neg++;
        if (vi == 0)
            zero++;
    }

    if (zero || (neg % 2 == 0))
        cout << 0 << endl;
    else
        cout << 1 << endl;
}

int32_t main()
{
    optimize();
    int n;
    cin >> n;
    while (n--)
        program();
    return 0;
}