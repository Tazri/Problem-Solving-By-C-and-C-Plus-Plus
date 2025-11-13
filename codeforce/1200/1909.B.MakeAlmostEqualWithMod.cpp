// link : https://codeforces.com/problemset/problem/1909/B
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
    ll n;
    cin >> n;
    vector<ll> v(n);

    for (ll &vi : v)
        cin >> vi;

    ll k = 2;

    while (k)
    {
        set<ll> st;

        for (ll vi : v)
            st.insert((vi % k));

        if (st.size() == 2)
        {
            cout << k << endl;
            return;
        }

        k <<= 1;
    }
}

int main()
{
    optimize();
    ll n;
    cin >> n;
    while (n--)
        program();
    return 0;
}