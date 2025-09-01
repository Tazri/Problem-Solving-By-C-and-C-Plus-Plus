// link : https://codeforces.com/problemset/problem/2025/B
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

ll mod = 1e9 + 7;

void cal(ll k)
{

    if (k == 0)
    {
        cout << 1 << endl;
        return;
    }

    vector<ll> arr;
    ll ans = 1;

    while (k > 0)
    {
        if (k & 1)
        {
            k--;
            arr.push_back(1);
        }
        else
        {
            arr.push_back(0);
            k /= 2;
        }
    }

    while (arr.size() > 0)
    {
        ll back = arr.back();
        arr.pop_back();

        if (back == 1)
        {
            ans *= 2;
            ans = ans % mod;
        }
        else
        {
            ans *= ans;
            ans = ans % mod;
        }
    }
    cout << ans << endl;
}

void program()
{
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        ll ai;
        cin >> ai; // waste
    }

    for (ll i = 0; i < t; i++)
    {
        ll k;
        cin >> k;
        cal(k);
    }
}

int main()
{
    optimize();
    program();
    return 0;
}

/*
2 2 2 2 2 2 2 2 2

1
2, 2, 2, 2, 2, 2, 2, 2

1, 0,
2, 2, 2, 2,

1, 0, 0,
2, 2

1, 0, 0, 0,
2

1, 0, 0, 0, 1

*/