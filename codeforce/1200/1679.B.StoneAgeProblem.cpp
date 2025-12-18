// link : https://codeforces.com/problemset/problem/1679/B
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
    ll n, q;
    cin >> n >> q;

    vector<ll> v(n);

    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    ll d = 0;

    set<ll> st;

    for (ll i = 0; i < n; i++)
        st.insert(i);

    while (q--)
    {
        ll t;
        cin >> t;

        if (t == 1)
        {
            ll i, x;
            cin >> i >> x;
            i--;
            if (st.count(i))
                sum -= v[i];
            else
                sum -= d;

            sum += x;
            st.insert(i);
            v[i] = x;
        }
        else
        {
            ll x;
            cin >> x;
            d = x;
            sum = n * x;
            st.clear();
        }
        cout << sum << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}