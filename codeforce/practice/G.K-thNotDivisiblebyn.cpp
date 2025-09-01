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
    ll n, k;
    cin >> n >> k;

    ll l = 1;
    ll r = n * k + 1;
    ll ans = -1;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;

        ll th = mid - (mid / n);

        if (th < k)
            l = mid + 1;
        else
        {
            ans = mid;
            r = mid - 1;
        }
    }

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