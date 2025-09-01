// link : https://codeforces.com/problemset/problem/1993/B
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
    vector<ll> even;
    even.reserve(n);
    ll odd = -1;
    ll oddCount = 0;

    for (ll i = 0; i < n; i++)
    {
        ll ai;
        cin >> ai;

        if (ai & 1)
        {
            if (odd == -1)
                odd = ai;
            else
                odd = max(odd, ai);

            oddCount++;
        }
        else
        {
            even.push_back(ai);
        }
    }

    if (oddCount == 0 || even.size() == 0)
    {
        cout << 0 << endl;
        return;
    }

    ll cnt = 0;
    sort(even.begin(), even.end());

    for (ll e : even)
    {
        if (e < odd)
        {
            odd += e;
        }
        else
        {
            cout << even.size() + 1 << endl;
            return;
        }
    }

    cout << even.size() << endl;
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

/*

6
1 1 2 2 3 6

4
3 2 2 8
2 2 3 8
*/