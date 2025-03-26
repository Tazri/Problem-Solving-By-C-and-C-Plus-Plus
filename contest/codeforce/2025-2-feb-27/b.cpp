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
    ll n, x, k;
    cin >> n >> x >> k;
    string ins;
    cin >> ins;
    ll ans = 0;

    for (char ch : ins)
    {
        if (x == 0)
        {
            break;
        }

        if (ch == 'L')
        {
            x--;
        }
        else
        {
            x++;
        }
        k--;

        if (k < 0)
        {
            cout << 0 << endl;
            return;
        }
    }

    if (x != 0)
    {
        cout << ans << endl;
        return;
    }

    ans = 1;

    // find out loop after second
    ll pos = ins[0] == 'L' ? -1 : 1;
    ll take = 1;

    for (ll i = 1; i < n; i++)
    {
        if (ins[i] == 'L')
        {
            pos--;
        }
        else
        {
            pos++;
        }
        take++;
        if (pos == 0)
            break;
    }

    if (pos == 0)
    {
        ans += k / take;
    }
    cout << ans << endl;
}

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
        program();
    return 0;
}