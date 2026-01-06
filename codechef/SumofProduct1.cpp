// link : https://www.codechef.com/problems/SUMOFPROD1
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

#define int ll

void program()
{
    int n;
    cin >> n;

    int len = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;

        if (vi)
        {
            len++;
            continue;
        }

        sum += ((len * (len + 1)) / 2);
        len = 0;
    }

    if (len)
        sum += ((len * (len + 1)) / 2);

    cout << sum << endl;
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