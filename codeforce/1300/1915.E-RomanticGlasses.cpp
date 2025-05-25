// link : https://codeforces.com/problemset/problem/1915/E
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
    vector<ll> arr(n);
    multiset<ll> st;

    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    st.insert(0);

    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        if (i & 1)
            sum -= arr[i];
        else
            sum += arr[i];

        if (st.find(sum) != st.end())
        {
            cout << "YES" << endl;
            return;
        }
        st.insert(sum);
    }

    cout << "NO" << endl;
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