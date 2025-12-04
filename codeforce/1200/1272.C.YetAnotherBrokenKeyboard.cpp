// link : https://codeforces.com/problemset/problem/1272/C
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
    string s;
    cin >> s;

    set<char> st;

    for (ll i = 0; i < k; i++)
    {
        char ch;
        cin >> ch;
        st.insert(ch);
    }

    ll len = 0;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (st.count(s[i]))
        {
            len++;
            continue;
        }
        ll add = (len * (len + 1)) / 2;
        ans += add;
        len = 0;
    }

    if (len)
        ans += (len * (len + 1)) / 2;

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}