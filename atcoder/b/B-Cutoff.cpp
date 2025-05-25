// link : https://atcoder.jp/contests/abc321/tasks/abc321_b?lang=en
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
    int n, x;
    cin >> n >> x;
    int sum = 0;
    int mn, mx;

    for (int i = 0; i < n - 1; i++)
    {
        int ai;
        cin >> ai;
        sum += ai;

        if (i == 0)
        {
            mn = ai;
            mx = ai;
        }
        else
        {
            mn = min(mn, ai);
            mx = max(mx, ai);
        }
    }

    sum -= mn;
    sum -= mx;

    if (sum >= x)
    {
        cout << 0 << endl;
        return;
    }

    int need = x - sum;

    if (need <= mn)
    {
        cout << 0 << endl;
        return;
    }

    if (need <= mx)
    {
        cout << need << endl;
        return;
    }

    cout << -1 << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}