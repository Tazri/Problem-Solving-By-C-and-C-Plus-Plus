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
    ll n, m, q;
    cin >> n >> m >> q;

    map<ll, bool> mp;
    map<ll, bool> hasAll;

    while (q--)
    {
        ll type, x, y;

        cin >> type;

        if (type == 1 || type == 3)
            cin >> x >> y;

        if (type == 2)
            cin >> x;

        if (type == 2)
        {
            hasAll[x] = true;
            continue;
        }

        ll key = ((x - 1) * m) + y;

        if (type == 1)
        {
            mp[key] = true;
            continue;
        }

        if (type == 3)
        {
            if (hasAll.count(x))
            {
                cout << "Yes" << endl;
                continue;
            }

            if (mp.count(key))
            {
                cout << "Yes" << endl;
                continue;
            }

            cout << "No" << endl;
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}