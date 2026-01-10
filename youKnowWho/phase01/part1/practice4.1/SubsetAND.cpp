// link : https://toph.co/p/subset-and
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

    int all = -1;

    while (n--)
    {
        int vi;
        cin >> vi;
        if (all == -1)
            all = vi;
        all = all & vi;
    }

    if (all < k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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