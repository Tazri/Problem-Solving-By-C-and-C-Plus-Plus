// link : https://codeforces.com/problemset/problem/1883/C
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
    int mnop = 5;
    cin >> n >> k;
    int odd = 0;
    int even = 0;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        if (ai & 1)
            odd++;
        else
            even++;

        int op = k - (ai % k);
        if (op == k)
            op = 0;
        mnop = min(mnop, op);
    }

    if (k == 4)
    {
        if (even <= 0)
        {
            if (odd >= 2)
            {
                mnop = min(mnop, 2);
            }
        }
        else if (odd <= 0)
        {
            if (even >= 2)
            {
                mnop = min(mnop, 0);
            }
        }
        else if (even >= 2)
        {
            mnop = min(mnop, 0);
        }
        else if (even == 1 && odd >= 1)
        {
            mnop = min(mnop, 1);
        }
    }
    cout << mnop << endl;
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