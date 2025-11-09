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
    int mn, mx;
    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;

        if (i == 0)
        {
            mn = vi;
            mx = vi;
        }
        mn = min(mn, vi);
        mx = max(mx, vi);
    }

    int x;
    cin >> x;

    if (mn <= x && x <= mx)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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