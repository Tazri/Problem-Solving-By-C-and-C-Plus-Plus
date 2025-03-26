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
    int mx = -1;
    int mxi = -1;

    for (int i = 1; i <= n; i++)
    {
        int l, q;
        cin >> l >> q;

        if (l > 10)
        {
            continue;
        }

        if (mxi == -1 || mx == -1)
        {
            mx = q;
            mxi = i;
            continue;
        }

        if (q > mx)
        {
            mxi = i;
            mx = q;
        }
    }

    cout << mxi << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}