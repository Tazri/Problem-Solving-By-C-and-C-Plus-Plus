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

#define endl '\n'

unsigned int mx = 1u << 31;

bitset<(1u << 31)> mp;

void program()
{
    int q;
    unsigned int s1, a, b;
    cin >> q >> s1 >> a >> b;

    unsigned int vi = s1;
    ll sum = 0;

    for (int i = 0; i < q; i++)
    {
        unsigned int si = vi / 2;
        if (vi & 1)
        {
            if (mp[si])
                continue;
            sum += (ll)si;
            mp[si] = true;
        }
        else
        {
            if (mp[si])
            {
                sum -= (ll)si;
            }

            mp[si] = false;
        }

        vi = (a * vi + b);
    }

    cout << sum << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}