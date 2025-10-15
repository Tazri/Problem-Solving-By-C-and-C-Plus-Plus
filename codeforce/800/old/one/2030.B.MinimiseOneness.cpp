// link : https://codeforces.com/problemset/problem/2030/B

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

    int t;
    cin >> t;

    while (t--)
    {
        int l;

        cin >> l;
        if (l == 1)
        {
            cout << 0 << endl;
            continue;
        }

        cout << 1;
        for (int i = 0; i < l - 1; i++)
        {
            cout << 0;
        }

        cout << endl;
    }
    return 0;
}