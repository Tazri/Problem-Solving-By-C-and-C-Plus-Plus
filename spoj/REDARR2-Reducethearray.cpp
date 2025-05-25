// link : https://www.spoj.com/problems/REDARR2/en/
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
    multiset<ll> st;

    for (ll i = 0; i < n; i++)
    {
        ll ai;
        cin >> ai;
        st.insert(ai);
    }

    ll need = 0;

    while (st.size() > 1)
    {
        ll mn1 = *st.begin();
        st.erase(st.begin());
        ll mn2 = *st.begin();
        st.erase(st.begin());

        ll sum = mn1 + mn2;
        st.insert(sum);
        need += sum;
    }

    cout << need << endl;
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