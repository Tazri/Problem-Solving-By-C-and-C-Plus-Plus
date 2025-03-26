// link : https://codeforces.com/problemset/problem/1802/B
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
    int fill = 0;
    int b = 0;
    int mx = 0;
    bool ml = false;
    for (int i = 0; i < n; i++)
    {
        int g = 0;
        cin >> g;

        if (g == 1)
        {
            if (!ml)
            {
                ml = true;
                continue;
            }
            b++;
        }
        else
        {
            mx = max(mx, b + fill);
            fill += b / 2;
            b %= 2;
        }
    }

    if (!ml)
    {
        cout << 0 << endl;
        return;
    }

    cout << max(mx, b + fill) + 1 << endl;
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
