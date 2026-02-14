// link : https://codeforces.com/contest/2191/problem/B
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
    int zero = 0;
    int one = 0;

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;

        if (vi == 0)
            zero++;
        else if (vi == 1)
            one++;
    }

    if (zero && one)
        cout << "YES" << endl;
    else if ((!zero) && one)
        cout << "NO" << endl;
    else if ((!zero) && (!one))
        cout << "NO" << endl;
    else if (zero > 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}