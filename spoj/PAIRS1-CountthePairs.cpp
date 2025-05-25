// link : https://vjudge.net/problem/SPOJ-PAIRS1/origin
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

    multiset<ll> st;

    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        ll ai;
        cin >> ai;
        ll b = ai - k;
        ll f = ai + k;

        if (st.find(b) != st.end())
            cnt++;
        if (st.find(f) != st.end())
            cnt++;

        st.insert(ai);
    }

    cout << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}