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
    int l, r;
    cin >> l >> r;

    if (l == r)
    {
        int d = l % 10;

        if (d == 2 || d == 3 || d == 9)
            cout << 1 << endl;
        else
            cout << 0 << endl;
        return;
    }

    int cl = l - (l % 10);
    int cr = r - (r % 10);

    if (cl == cr)
    {
        int sans = 0;

        for (int i = l; i <= r; i++)
        {
            int d = i % 10;
            if (d == 2 || d == 3 || d == 9)
                sans++;
        }
        cout << sans << endl;
        return;
    }

    int ans = 0;

    while (l % 10 != 0)
    {
        int d = l % 10;
        if (d == 2 || d == 3 || d == 9)
            ans++;
        l++;
    }

    while (r % 10 != 0)
    {
        int d = r % 10;
        if (d == 2 || d == 3 || d == 9)
            ans++;
        r--;
    }

    int diff = r - l;
    ans += ((diff / 10) * 3);
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