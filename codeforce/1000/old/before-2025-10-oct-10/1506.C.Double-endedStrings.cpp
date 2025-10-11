// link : https://codeforces.com/problemset/problem/1506/C
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
    string a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0 << endl;
        return;
    }

    string mn, mx;

    if (a.size() < b.size())
    {
        mn = a;
        mx = b;
    }
    else
    {
        mn = b;
        mx = a;
    }

    int mxSize = 0;

    for (int i = 0; i < mn.size(); i++)
    {
        for (int j = i; j < mn.size(); j++)
        {
            int t = j - i + 1;

            if (t < mxSize)
                continue;

            string subString = mn.substr(i, t);

            if (mx.find(subString) != string::npos)
            {
                mxSize = max(mxSize, t);
            }
        }
    }

    int ans = mx.size() + mn.size() - (2 * mxSize);
    cout << ans << endl;
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